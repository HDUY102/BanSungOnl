// Copyright Epic Games, Inc. All Rights Reserved.

#include "BanSungOnlPlayerController.h"
#include "GameFramework/Pawn.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "NiagaraSystem.h"
#include "NiagaraFunctionLibrary.h"
#include "BanSungOnlCharacter.h"
#include "BanSungOnlGameMode.h"
#include "Engine/World.h"
#include "EnhancedInputComponent.h"
#include "InputActionValue.h"
#include "EnhancedInputSubsystems.h"
#include "Components/CapsuleComponent.h"
#include "Engine/LocalPlayer.h"
#include "Engine/Engine.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Net/UnrealNetwork.h"

DEFINE_LOG_CATEGORY(LogTemplateCharacter);

ABanSungOnlPlayerController::ABanSungOnlPlayerController()
{
	bReplicates = true;
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Default;
	CachedDestination = FVector::ZeroVector;
	FollowTime = 0.f;
}

void ABanSungOnlPlayerController::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();
}

void ABanSungOnlPlayerController::SetupInputComponent()
{
	// set up gameplay key bindings
	Super::SetupInputComponent();

	// Add Input Mapping Context
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		Subsystem->AddMappingContext(DefaultMappingContext, 0);
	}

	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(InputComponent))
	{
		// Move W S A D
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ABanSungOnlPlayerController::OnMoveAction);
		// Fire
		EnhancedInputComponent->BindAction(FireAction, ETriggerEvent::Triggered, this, &ABanSungOnlPlayerController::OnSetDestinationTriggered);
		EnhancedInputComponent->BindAction(FireAction, ETriggerEvent::Started, this, &ABanSungOnlPlayerController::OnFirePistol);
		// Change gun
		EnhancedInputComponent->BindAction(OnKeyBoardPistol, ETriggerEvent::Started, this, &ABanSungOnlPlayerController::OnPistolKeyBoard);
		EnhancedInputComponent->BindAction(OnKeyBoardRifle, ETriggerEvent::Started, this, &ABanSungOnlPlayerController::OnRifleKeyBoard);
		// Reload Ammo
		EnhancedInputComponent->BindAction(ReloadAmmo, ETriggerEvent::Started, this, &ABanSungOnlPlayerController::OnReloadAmmo);
	}
	else
	{
		UE_LOG(LogTemplateCharacter, Error, TEXT("'%s' Failed to find an Enhanced Input Component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
}

void ABanSungOnlPlayerController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	if (!HasAuthority())
	{
		FHitResult HitResult;
		GetHitResultUnderCursorByChannel(ETraceTypeQuery::TraceTypeQuery1, false, HitResult);
		FVector MouseLocation = HitResult.Location;

		Server_SetRotation(MouseLocation);
	}
}

void ABanSungOnlPlayerController::OnInputStarted()
{
	StopMovement();
}

// Triggered every frame when the input is held down
void ABanSungOnlPlayerController::OnSetDestinationTriggered()
{
	// We flag that the input is being pressed
	FollowTime += GetWorld()->GetDeltaSeconds();
	
	// We look for the location in the world where the player has pressed the input
	bool bHitSuccessful = false;
	if (bIsTouch)
	{
		bHitSuccessful = GetHitResultUnderFinger(ETouchIndex::Touch1, ECollisionChannel::ECC_Visibility, true, Hit);
	}
	else
	{
		bHitSuccessful = GetHitResultUnderCursor(ECollisionChannel::ECC_Visibility, true, Hit);
	}

	// If we hit a surface, cache the location
	if (bHitSuccessful)
	{
		CachedDestination = Hit.Location;
	}
	
	// Fire
	ABanSungOnlCharacter* PlayerCharacter = Cast<ABanSungOnlCharacter>(GetPawn());
	if (IsValid(PlayerCharacter))
	{
		Server_FireRifle(CachedDestination);
	}
}

void ABanSungOnlPlayerController::OnSetDestinationReleased()
{
	// If it was a short press
	if (FollowTime <= ShortPressThreshold)
	{
		// We move there and spawn some particles
		UAIBlueprintHelperLibrary::SimpleMoveToLocation(this, CachedDestination);
		UNiagaraFunctionLibrary::SpawnSystemAtLocation(this, FXCursor, CachedDestination, FRotator::ZeroRotator, FVector(1.f, 1.f, 1.f), true, true, ENCPoolMethod::None, true);
	}
	FollowTime = 0.f;
}

// Triggered every frame when the input is held down
void ABanSungOnlPlayerController::OnTouchTriggered()
{
	bIsTouch = true;
	OnSetDestinationTriggered();
}

void ABanSungOnlPlayerController::OnTouchReleased()
{
	bIsTouch = false;
	OnSetDestinationReleased();
}

void ABanSungOnlPlayerController::OnMoveAction(const FInputActionValue& Value)
{
	const FVector2D MovementVector = Value.Get<FVector2D>();
	if (MovementVector.SizeSquared() > 0.0f)
	{
		const FRotator Rotation = GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		const FVector RightDirection = FRotationMatrix(Rotation).GetUnitAxis(EAxis::Y);

		GetPawn()->AddMovementInput(ForwardDirection, MovementVector.Y);
		GetPawn()->AddMovementInput(RightDirection, MovementVector.X);
	}
}

void ABanSungOnlPlayerController::Server_SetRotation_Implementation(const FVector MousePosition)
{
	APawn* ControlledPawn = GetPawn();
	if(IsValid(ControlledPawn))
	{
		ABanSungOnlCharacter* CharacterPlayer = Cast<ABanSungOnlCharacter>(GetPawn());
		if(IsValid(CharacterPlayer))
		{
			CharacterPlayer->Mouse = MousePosition;
		}
	}
}

void ABanSungOnlPlayerController::OnPistolKeyBoard(const FInputActionValue& Value)
{
	ABanSungOnlCharacter* LocalCharacter = Cast<ABanSungOnlCharacter>(GetPawn());
	if(IsValid(LocalCharacter))
	{
		LocalCharacter->EquipPistol();
	}
}

void ABanSungOnlPlayerController::OnRifleKeyBoard(const FInputActionValue& Value)
{
	ABanSungOnlCharacter* LocalCharacter = Cast<ABanSungOnlCharacter>(GetPawn());
	if(IsValid(LocalCharacter))
	{
		LocalCharacter->EquipRifle();
	}
}

void ABanSungOnlPlayerController::OnReloadAmmo(const FInputActionValue& Value)
{
	ABanSungOnlCharacter* PlayerCharacter = Cast<ABanSungOnlCharacter>(GetPawn());
	if(IsValid(PlayerCharacter))
	{
		Server_Reload();
	}
}

void ABanSungOnlPlayerController::Reload(ABanSungOnlCharacter* PlayerCharacter)
{
	if (IsValid(PlayerCharacter) && IsValid(PlayerCharacter->CurWeapon))
	{
		PlayerCharacter->CurWeapon->ReloadAmmo();
		isReloading = false;
	}
}

void ABanSungOnlPlayerController::OnFirePistol()
{
	if(IsValid(GetPawn()))
	{
		Server_FirePistol();
	}
}

void ABanSungOnlPlayerController::OnRep_IsPlayAgain()
{
	OnRemoveUI.Broadcast();
}

void ABanSungOnlPlayerController::OnRep_IsWinPlayAgain()
{
	OnRemoveWinUI.Broadcast();
}

void ABanSungOnlPlayerController::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(ABanSungOnlPlayerController, PlayAgain);
	DOREPLIFETIME(ABanSungOnlPlayerController, WinPlayAgain);
	DOREPLIFETIME(ABanSungOnlPlayerController, isReloading);
}

void ABanSungOnlPlayerController::ServerPlayAgain_Implementation()
{
	ABanSungOnlGameMode* OnlGameMode = Cast<ABanSungOnlGameMode>(UGameplayStatics::GetGameMode(GetWorld()));
	if (IsValid(OnlGameMode))
	{
		OnlGameMode->PlayAgain();
	}
}

void ABanSungOnlPlayerController::Server_FireRifle_Implementation(FVector Mouse)
{
	if (ABanSungOnlCharacter* PlayerCharacter = Cast<ABanSungOnlCharacter>(GetPawn()))
	{
		if(PlayerCharacter->CurWeapon->CurAmmo > 0 && !isReloading)
		{
			if (PlayerCharacter->CurWeapon == PlayerCharacter->Rifle)
			{
				PlayerCharacter->CurWeapon->ShootBullet(Mouse);
			}
			else if(PlayerCharacter->CurWeapon == PlayerCharacter->Pistol && !StepByOne)
			{
				StepByOne = true;
				PlayerCharacter->CurWeapon->ShootBullet(Mouse);
			}
		}
		if(PlayerCharacter->CurWeapon->CurAmmo <= 0 )
		{
			Server_Reload();
		}
	}
}

void ABanSungOnlPlayerController::Server_FirePistol_Implementation()
{
	if (ABanSungOnlCharacter* PlayerCharacter = Cast<ABanSungOnlCharacter>(GetPawn()))
	{
		StepByOne = false;
	}
}

void ABanSungOnlPlayerController::Server_Reload_Implementation()
{
	ABanSungOnlCharacter* PlayerCharacter = Cast<ABanSungOnlCharacter>(GetPawn());
	if (IsValid(PlayerCharacter) && PlayerCharacter->CurWeapon->Ammo > 0 && PlayerCharacter->CurWeapon->CurAmmo < PlayerCharacter->CurWeapon->Magazine)
	{
		FTimerHandle ReloadTime;
		isReloading = true;
		GetWorld()->GetTimerManager().SetTimer(ReloadTime, FTimerDelegate::CreateUObject(this, &ABanSungOnlPlayerController::Reload, PlayerCharacter), 0.8f, false);
	}
}
