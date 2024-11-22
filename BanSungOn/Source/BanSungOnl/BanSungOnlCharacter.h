// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "GameFramework/Character.h"
#include "Weapon/Pistol.h"
#include "Weapon/Rifle.h"
#include "BanSungOnlCharacter.generated.h"
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FShowHealth); // show HUD attacked
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FShowWinGame); // show HUD WinGame
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FShowLoseGame); // show HUD LoseGame
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

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Health", ReplicatedUsing = OnRep_ChangeHealth)
	float Health;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Health")
	float MaxHealth;	
	UFUNCTION()
	void OnRep_ChangeHealth();
	UFUNCTION()
	void PlayerTakeDmg(float Dmg);

	// Dead
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_IsDead)
	bool bIsDead;
	UFUNCTION()
	void OnRep_IsDead();
	//Game Over
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_IsGameOver)
	bool bIsGamveOver;
	UFUNCTION()
	void OnRep_IsGameOver();
	
	/* Server -> Client
	 * Send to client when properties change*/
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category="Weapon",Replicated)
	AWeapon* CurWeapon;
	UPROPERTY()
	ARifle* Rifle;
	UPROPERTY()
	APistol* Pistol;
	UFUNCTION(Server, Unreliable)
	void Server_EquipPistol();
	void EquipPistol();
	UFUNCTION(Server, Unreliable)
	void Server_EquipRifle();
	void EquipRifle();
	
	UPROPERTY(EditAnywhere, Category="input")
	TSubclassOf<AActor> RifleToSpawn;
	UPROPERTY(EditAnywhere, Category="input")
	TSubclassOf<AActor> PistolToSpawn;
	UFUNCTION(Server,Unreliable)
	void Server_SpawnRifle();
	UFUNCTION(Server,Unreliable)
	void Server_SpawnPistol();
	
	UPROPERTY(BlueprintAssignable, Category = "Show HUD Attacked")
	FShowHealth ShowHealth; // Var show HUD attacked
	UPROPERTY(BlueprintAssignable, Category = "Show Win Game")
	FShowWinGame ShowWinGame; // Var Show Win Game
	UPROPERTY(BlueprintAssignable, Category = "Show Lose Game")
	FShowLoseGame ShowLoseGame; // Var Show Lose Game
	
private:
	/** Top down camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* TopDownCameraComponent;

	/** Camera boom positioning the camera above the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	// Display HealthBar
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "UI", meta = (AllowPrivateAccess = "true"))
	UWidgetComponent* WidgetComponent;
};

