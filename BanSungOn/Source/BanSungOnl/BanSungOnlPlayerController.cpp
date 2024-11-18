// Copyright Epic Games, Inc. All Rights Reserved.

#include "BanSungOnlPlayerController.h"
#include "GameFramework/Pawn.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "NiagaraSystem.h"
#include "NiagaraFunctionLibrary.h"
#include "BanSungOnlCharacter.h"
#include "Engine/World.h"
#include "EnhancedInputComponent.h"
#include "InputActionValue.h"
#include "EnhancedInputSubsystems.h"
#include "Engine/LocalPlayer.h"
#include "Kismet/KismetSystemLibrary.h"

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
		bool bHitSuccessful = GetHitResultUnderCursor(ECollisionChannel::ECC_Visibility, true, Hit);
		if (bHitSuccessful)
		{
			Server_SetRotation(Hit.ImpactPoint);
		}
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
		UKismetSystemLibrary::PrintString(this,"Hello");
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
		FVector Direction = MousePosition - ControlledPawn->GetActorLocation();
		FRotator NewRotation = Direction.Rotation();
		NewRotation.Pitch = ControlledPawn->GetActorRotation().Pitch;
		ControlledPawn->SetActorRotation(NewRotation);
	}
}

void ABanSungOnlPlayerController::OnPistolKeyBoard(const FInputActionValue& Value)
{
	
}

void ABanSungOnlPlayerController::OnRifleKeyBoard(const FInputActionValue& Value)
{
	
}

void ABanSungOnlPlayerController::OnReloadAmmo(const FInputActionValue& Value)
{
	
}

void ABanSungOnlPlayerController::Reload()
{
	
}