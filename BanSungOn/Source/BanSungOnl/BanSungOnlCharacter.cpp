// Copyright Epic Games, Inc. All Rights Reserved.

#include "BanSungOnlCharacter.h"

#include "BanSungOnlGameMode.h"
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
}

void ABanSungOnlCharacter::BeginPlay()
{
	Super::BeginPlay();
	Health = 5.f;
	MaxHealth = 50.f;

	if(!HasAuthority())
	{
		Server_SpawnPistol();
		Server_SpawnRifle();
		Server_EquipRifle();
	}

	ABanSungOnlGameMode* PlayerGameMode = Cast<ABanSungOnlGameMode>(GetWorld()->GetAuthGameMode());
	AController* Controllers = GetController();
	if(PlayerGameMode)
	{
		PlayerGameMode->AddPlayer(this);
	}
}

void ABanSungOnlCharacter::OnRep_ChangeHealth()
{
	APlayerController* PlayerController = Cast<APlayerController>(GetController());
	if (PlayerController && PlayerController->IsLocalController() && Health > 0.f)
	{
		ShowHealth.Broadcast();
	}
}

void ABanSungOnlCharacter::PlayerTakeDmg(float Dmg)
{
	Health -= Dmg;
	if(Health <= 0.f)
	{
		bIsDead = true;
		ABanSungOnlGameMode* PlayerGameMode = Cast<ABanSungOnlGameMode>(GetWorld()->GetAuthGameMode());
		if(PlayerGameMode)
		{
			PlayerGameMode->DelPlayer(this);
		}
		
		GetMesh()->SetVisibility(false, true);
		GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		GetCapsuleComponent()->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
		if (Pistol)
		{
			Pistol->Destroy();
			Pistol = nullptr;
		}
		if (Rifle)
		{
			Rifle->Destroy();
			Rifle = nullptr;
		}
		OnRep_IsDead();
		
		if (APlayerController* PlayerController = Cast<APlayerController>(GetController()))
		{
			TArray<ABanSungOnlCharacter*> AlivePlayers = PlayerGameMode->GetAlivePlayers();

			if (AlivePlayers.Num() > 0)
			{
				ABanSungOnlCharacter* NewTarget = AlivePlayers[0];

				PlayerController->SetViewTargetWithBlend(NewTarget, 2.0f, EViewTargetBlendFunction::VTBlend_Cubic, 1.0f);
			}else
			{
				bIsGamveOver = true;
				OnRep_IsGameOver();
			}
		}
	}
}

void ABanSungOnlCharacter::OnRep_IsDead()
{
	if(bIsDead)
	{
		if(!HasAuthority())
		{
			APlayerController* PlayerController = Cast<APlayerController>(GetController());
			if (PlayerController && PlayerController->IsLocalController())
			{
				PlayerController->DisableInput(PlayerController);
			}
		}
	}
}

void ABanSungOnlCharacter::OnRep_IsGameOver()
{
	if(bIsGamveOver)
	{
		ShowLoseGame.Broadcast();
	}
}

void ABanSungOnlCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ABanSungOnlCharacter, Health);
	DOREPLIFETIME(ABanSungOnlCharacter, CurWeapon);
	DOREPLIFETIME(ABanSungOnlCharacter, bIsDead);
	DOREPLIFETIME(ABanSungOnlCharacter, bIsGamveOver);
}

void ABanSungOnlCharacter::EquipPistol()
{
	Server_EquipPistol();
}

void ABanSungOnlCharacter::EquipRifle()
{
	Server_EquipRifle();
}

void ABanSungOnlCharacter::Server_SpawnPistol_Implementation()
{
	Pistol = GetWorld()->SpawnActor<APistol>(PistolToSpawn, GetActorLocation(),FRotator::ZeroRotator);
	Pistol->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, TEXT("PistolSocket"));
}

void ABanSungOnlCharacter::Server_SpawnRifle_Implementation()
{
	Rifle = GetWorld()->SpawnActor<ARifle>(RifleToSpawn, GetActorLocation(),FRotator::ZeroRotator);
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
