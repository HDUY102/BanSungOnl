// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Weapon/Pistol.h"
#include "Weapon/Rifle.h"
#include "BanSungOnlCharacter.generated.h"
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FShowHealth); // show HUD attacked
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FShowWinGame); // show HUD WinGame
// DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FShowNameItem, int32, ItemType); // show name item
UCLASS(Blueprintable)
class ABanSungOnlCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ABanSungOnlCharacter();

	// Called every frame.
	virtual void Tick(float DeltaSeconds) override;
	virtual void BeginPlay() override;

	/** Returns TopDownCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetTopDownCameraComponent() const { return TopDownCameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Health", Replicated)
	float Health;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Health")
	float MaxHealth;
	
	UPROPERTY(Replicated)
	ARifle* Rifle;
	UPROPERTY(Replicated)
	APistol* Pistol;
	UPROPERTY(EditAnywhere, Category="input", Replicated)
	TSubclassOf<AActor> RifleToSpawn;
	UPROPERTY(EditAnywhere, Category="input", Replicated)
	TSubclassOf<AActor> PistolToSpawn;
	
	/* Server -> Client
	 * Send to client when properties change*/
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UFUNCTION(Server, Unreliable)
	void SpawnRifle();
	UFUNCTION(Server, Unreliable)
	void SpawnPistol();
	
	// Var show HUD attacked
	UPROPERTY(BlueprintAssignable, Category = "Show HUD Attacked")
	FShowHealth ShowHealth;
	// Var Show Win Game
	UPROPERTY(BlueprintAssignable, Category = "Show Win Game")
	FShowWinGame ShowWinGame;
	
private:
	/** Top down camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* TopDownCameraComponent;

	/** Camera boom positioning the camera above the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;
};

