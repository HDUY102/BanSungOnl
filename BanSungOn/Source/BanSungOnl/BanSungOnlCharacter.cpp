// Copyright Epic Games, Inc. All Rights Reserved.

#include "BanSungOnlCharacter.h"
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
	Health = 50.f;
	MaxHealth = 50.f;

	if(!HasAuthority())
	{
		Server_SpawnPistol();
		Server_SpawnRifle();
		Server_EquipRifle();
	}
}

void ABanSungOnlCharacter::OnRep_ChangeHealth()
{
	APlayerController* PlayerController = Cast<APlayerController>(GetController());
	if (PlayerController && PlayerController->IsLocalController())
	{
		ShowHealth.Broadcast();
	}
}

void ABanSungOnlCharacter::PlayerTakeDmg(float Dmg)
{
	Health -= Dmg;
	if(Health <= 0 )
	{
		ShowLoseGame.Broadcast();
	}
}

void ABanSungOnlCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ABanSungOnlCharacter, Health);
	DOREPLIFETIME(ABanSungOnlCharacter, CurWeapon);
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
