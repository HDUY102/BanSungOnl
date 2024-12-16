// Copyright Epic Games, Inc. All Rights Reserved.

#include "BanSungOnlCharacter.h"

#include "BanSungOnlGameMode.h"
#include "BanSungOnlPlayerController.h"
#include "Camera/CameraActor.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/DecalComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/WidgetComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/SpringArmComponent.h"
#include "Materials/Material.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Net/UnrealNetwork.h"

ABanSungOnlCharacter::ABanSungOnlCharacter()
{
	// Set size for player capsule
	bReplicates = true; // Enable replication for the character
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// Don't rotate character to camera direction
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Rotate character to moving direction
	GetCharacterMovement()->RotationRate = FRotator(0.f, 640.f, 0.f);
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->bSnapToPlaneAtStart = true;

	// Create a camera boom...
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetUsingAbsoluteRotation(true); // Don't want arm to rotate when character does
	CameraBoom->TargetArmLength = 800.f;
	CameraBoom->SetRelativeRotation(FRotator(-60.f, 0.f, 0.f));
	CameraBoom->bDoCollisionTest = false; // Don't want to pull camera in when it collides with level

	// Create a camera...
	TopDownCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("TopDownCamera"));
	TopDownCameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	TopDownCameraComponent->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Activate ticking in order to update the cursor every frame.
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;

	WidgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("HealthWidget"));
	WidgetComponent->SetupAttachment(RootComponent);
}

void ABanSungOnlCharacter::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);

	if (Health > 0)
	{
		FVector Location = GetActorLocation();
		FRotator Temp =  UKismetMathLibrary::FindLookAtRotation(Location , Mouse);
		Temp.Roll = GetActorRotation().Roll;
		Temp.Pitch = GetActorRotation().Pitch;
		SetActorRotation(Temp);
	}
}

void ABanSungOnlCharacter::BeginPlay()
{
	Super::BeginPlay();
	Health = 50.f;
	MaxHealth = 50.f;

	if(!HasAuthority())
	{
		Server_SpawnPistol();
		Server_SpawnRifle();
		Server_EquipRifle();
	}
	StartLocation = GetActorLocation();
}

void ABanSungOnlCharacter::OnRep_ChangeHealth()
{
	APlayerController* PlayerController = Cast<APlayerController>(GetController());
	if (PlayerController && PlayerController->IsLocalController() && Health > 0.f)
	{
		if(!bPlusHealth)
			ShowWBIsAtked.Broadcast();
	}
}

void ABanSungOnlCharacter::PlayerTakeDmg(float Dmg)
{
	if(HasAuthority())
	{
		bPlusHealth = false;
		Health -= Dmg;
		if(Health <= 0.f)
		{
			bIsDead = true;
			GetMesh()->SetVisibility(false, true);
			GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
			Pistol->SetActorHiddenInGame(true);
			Rifle->SetActorHiddenInGame(true);
			
			ABanSungOnlGameMode* PlayerGameMode = Cast<ABanSungOnlGameMode>(GetWorld()->GetAuthGameMode());
			if(PlayerGameMode)
			{
				TArray<ABanSungOnlCharacter*> AlivePlayers = PlayerGameMode->OnPlayerDead.Execute();
				for(auto PlayerController : PlayerGameMode->CPlayerAgain)
				{
					ABanSungOnlCharacter* PlayerCharacter = Cast<ABanSungOnlCharacter>(PlayerController->GetPawn());
					if (PlayerCharacter && !PlayerCharacter->bIsDead)
					{
						AlivePlayers.Add(PlayerCharacter);
					}
				}	
				if (APlayerController* PlayerController = Cast<APlayerController>(GetController()))
				{
					OriginalController = PlayerController;
					if (AlivePlayers.Num() > 0)
					{
						ABanSungOnlCharacter* NewTarget = AlivePlayers[0];
						PlayerController->SetViewTargetWithBlend(NewTarget, 2.0f, EViewTargetBlendFunction::VTBlend_Cubic, 0.5f);
					}else
					{
						PlayerGameMode->GameOver();
					}
				}
			}
		}
	}
}

void ABanSungOnlCharacter::OnRep_IsDead()
{
	if(bIsDead)
	{
		APlayerController* PlayerController = Cast<APlayerController>(GetController());
		if (PlayerController && PlayerController->IsLocalController())
		{
			PlayerController->DisableInput(PlayerController);
		}
	}
}

void ABanSungOnlCharacter::OnRep_IsGameOver()
{
	if(bIsGameOver)
	{
		ShowLoseGame.Broadcast();
		APlayerController* PlayerController = Cast<APlayerController>(GetController());
		if (PlayerController && PlayerController->IsLocalController())
		{
			PlayerController->EnableInput(PlayerController);
		}
	}
}

void ABanSungOnlCharacter::OnRep_IsGameWin()
{
	if(bIsGameWin)
	{
		ShowWinGame.Broadcast();
		APlayerController* PlayerController = Cast<APlayerController>(GetController());
		if (PlayerController && PlayerController->IsLocalController())
		{
			PlayerController->EnableInput(PlayerController);
		}
	}
}

void ABanSungOnlCharacter::OnRep_Score()
{
	ShowScore.Broadcast();
}

void ABanSungOnlCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ABanSungOnlCharacter, Health);
	DOREPLIFETIME(ABanSungOnlCharacter, CurWeapon);
	DOREPLIFETIME(ABanSungOnlCharacter, bIsDead);
	DOREPLIFETIME(ABanSungOnlCharacter, bIsGameOver);
	DOREPLIFETIME(ABanSungOnlCharacter, bIsGameWin);
	DOREPLIFETIME(ABanSungOnlCharacter, Score);
	DOREPLIFETIME(ABanSungOnlCharacter, bPlusHealth);
	DOREPLIFETIME(ABanSungOnlCharacter, Mouse);
}

void ABanSungOnlCharacter::EquipPistol()
{
	Server_EquipPistol();
}

void ABanSungOnlCharacter::EquipRifle()
{
	Server_EquipRifle();
}

void ABanSungOnlCharacter::ResetPlayer()
{
	bPlusHealth = true;
	Health = MaxHealth;
	Score = 0;
	Pistol->ResetAmmo();
	Rifle->ResetAmmo();
	EquipRifle();
}

void ABanSungOnlCharacter::Server_SpawnPistol_Implementation()
{
	FActorSpawnParameters spawnParams;
	spawnParams.Owner = this;
	Pistol = GetWorld()->SpawnActor<APistol>(PistolToSpawn, GetActorLocation(),FRotator::ZeroRotator,spawnParams);
	Pistol->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, TEXT("PistolSocket"));
}

void ABanSungOnlCharacter::Server_SpawnRifle_Implementation()
{
	FActorSpawnParameters spawnParams;
	spawnParams.Owner = this;
	Rifle = GetWorld()->SpawnActor<ARifle>(RifleToSpawn, GetActorLocation(),FRotator::ZeroRotator,spawnParams);
	Rifle->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, TEXT("RifleSocket"));
}

void ABanSungOnlCharacter::Server_EquipRifle_Implementation()
{
	if(IsValid(Rifle))
	{
		Rifle->SetActorHiddenInGame(false); //Hidden Rifle
		Pistol->SetActorHiddenInGame(true); // Display Pistol
		CurWeapon = Rifle;
	}
}

void ABanSungOnlCharacter::Server_EquipPistol_Implementation()
{
	if(IsValid(Pistol))
	{
		Rifle->SetActorHiddenInGame(true); //Hidden Rifle
		Pistol->SetActorHiddenInGame(false); // Display Pistol
		CurWeapon = Pistol;
	}
}
