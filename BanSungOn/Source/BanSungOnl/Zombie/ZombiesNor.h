﻿// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Zombies.h"
#include "GameFramework/Character.h"
#include "ZombiesNor.generated.h"

UCLASS()
class BANSUNGONL_API AZombiesNor : public AZombies
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AZombiesNor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
