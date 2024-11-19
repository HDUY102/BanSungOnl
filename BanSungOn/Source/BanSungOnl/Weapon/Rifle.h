// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapon.h"
#include "GameFramework/Actor.h"
#include "Rifle.generated.h"

UCLASS()
class BANSUNGONL_API ARifle : public AWeapon
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ARifle();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	UPROPERTY(EditAnywhere, Category = "Sound")
	USoundBase* SB_ShootRifle;
	UPROPERTY(EditAnywhere, Category = "Sound")
	USoundBase* SB_ReloadRifle;

	virtual void ShootSound() override;
	virtual void ReloadSound() override;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
