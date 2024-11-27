// Fill out your copyright notice in the Description page of Project Settings.


#include "ZombiesBoss.h"


// Sets default values
AZombiesBoss::AZombiesBoss()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AZombiesBoss::BeginPlay()
{
	Super::BeginPlay();
	HealthZomb = 250.f;
	MaxHealthZomb = 250.f;
	DamageZomb = 10.f;
}

// Called every frame
void AZombiesBoss::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AZombiesBoss::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

