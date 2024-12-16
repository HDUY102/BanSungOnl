// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "BanSungOnlCharacter.h"
#include "InputActionValue.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/PlayerController.h"
#include "BanSungOnlPlayerController.generated.h"

/** Forward declaration to improve compiling times */
class UNiagaraSystem;
class UInputMappingContext;
class UInputAction;

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRemoveUI);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRemoveWinUI);

UCLASS()
class ABanSungOnlPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	ABanSungOnlPlayerController();

	/** Time Threshold to know if it was a short press */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	float ShortPressThreshold;

	/** FX Class that we will spawn when clicking */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UNiagaraSystem* FXCursor;

	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputMappingContext* DefaultMappingContext;

	/** Variable Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputAction* MoveAction;
	/** Variable Fire Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputAction* FireAction;
	/** Change gun */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputAction* OnKeyBoardPistol;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputAction* OnKeyBoardRifle;
	/** Reload Ammo */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputAction* ReloadAmmo;

	// HUD
	UPROPERTY(BlueprintAssignable)
	FRemoveUI OnRemoveUI;

	// HUD win
	UPROPERTY(BlueprintAssignable)
	FRemoveWinUI OnRemoveWinUI;
	
protected:
	/** True if the controlled character should navigate to the mouse cursor. */
	uint32 bMoveToMouseCursor : 1;

	virtual void SetupInputComponent() override;
	
	virtual void Tick(float DeltaSeconds) override;
	// To add mapping context
	virtual void BeginPlay();

	/** Input handlers for SetDestination action. */
	void OnInputStarted();
	void OnSetDestinationTriggered();
	void OnSetDestinationReleased();
	void OnTouchTriggered();
	void OnTouchReleased();
	
	void OnMoveAction(const FInputActionValue& Value); // Move Input

	UFUNCTION(Server, Unreliable)
	void Server_SetRotation(const FVector MousePosition); // Rotation
	
	void OnPistolKeyBoard(const FInputActionValue& Value); // Change Pistol Input
	void OnRifleKeyBoard(const FInputActionValue& Value); // Change Rifle Input

	UPROPERTY()
	AWeapon* ReloadingWeapon;
	void OnReloadAmmo(const FInputActionValue& Value); // Reload Input
	void Reload(ABanSungOnlCharacter* PlayerCharacter);
	UFUNCTION(Server, Unreliable)
	void Server_Reload();

	FTimerHandle FireRifleTime,FirePistolTime;
	bool StepByOne;
	void OnFirePistol(); // Fire Input
	UFUNCTION(Server, Unreliable)
	void Server_FirePistol();
	UFUNCTION(Server, Unreliable)
	void Server_FireRifle(FVector Mouse);

	UFUNCTION(Server, Unreliable, BlueprintCallable)
	void ServerPlayAgain();
	
public:
	UFUNCTION()
	void OnRep_IsPlayAgain();
	
	UPROPERTY(ReplicatedUsing=OnRep_IsPlayAgain)
	int PlayAgain = 0;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Replicated)
	bool isReloading;

	UFUNCTION()
	void OnRep_IsWinPlayAgain();
	
	UPROPERTY(ReplicatedUsing=OnRep_IsWinPlayAgain)
	int WinPlayAgain = 0;

	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;
private:
	FVector CachedDestination;
	UPROPERTY()
	FHitResult Hit;
	bool bIsTouch; // Is it a touch device
	float FollowTime; // For how long it has been pressed
};


