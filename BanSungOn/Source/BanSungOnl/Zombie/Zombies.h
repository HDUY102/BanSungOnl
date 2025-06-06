﻿// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BanSungOnl/BanSungOnlCharacter.h"
#include "BanSungOnl/Items/ItemAmmoPis.h"
#include "BanSungOnl/Items/ItemAmmoRif.h"
#include "BanSungOnl/Items/ItemsNew.h"
#include "Components/SphereComponent.h"
#include "Components/WidgetComponent.h"
#include "GameFramework/Character.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Zombies.generated.h"

UENUM(BlueprintType)
enum class EnumItems : uint8
{
	Health UMETA(DisplayName = "Item Health"),
	AmmoRif UMETA(DisplayName = "Item Rif"),
	AmmoPis UMETA(DisplayName = "Item Pis"),
};
DECLARE_DELEGATE(FOnZombieDeath);
UCLASS()
class BANSUNGONL_API AZombies : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AZombies();
	UPROPERTY(BlueprintReadOnly, Replicated)
	float HealthZomb;
	UPROPERTY(BlueprintReadOnly,Replicated)
	float DamageZomb;
	UPROPERTY(BlueprintReadOnly)
	float MaxHealthZomb;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Coli")
	USphereComponent* SphereComponent;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Atk
	// UFUNCTION(BlueprintCallable, Server,Unreliable)
	// void Server_AtkCharacter();
		
	// Display HealthBar
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "UI", meta = (AllowPrivateAccess = "true"))
	UWidgetComponent* WidgetComponent;
	
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	FOnZombieDeath OnZombieDeath;
	
	UFUNCTION()
	void TakeDmg(float Dmg, ABanSungOnlCharacter* Shooter);

	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category="ItemsSpawn")
	TSubclassOf<AItemsNew> HealthToSpawn;
	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category="ItemsSpawn")
	TSubclassOf<AItemAmmoPis> PisToSpawn;
	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category="ItemsSpawn")
	TSubclassOf<AItemAmmoRif> RifToSpawn;
	
	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	EnumItems TypeItem;
	
	UFUNCTION()
	void RandomItems(FVector BodyZombie);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Replicated)
	TArray<ABanSungOnlCharacter*> PlayerList;
	
	UFUNCTION(BlueprintCallable)
	void OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION(BlueprintCallable)
	void EndOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
};
