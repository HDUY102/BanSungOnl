// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemHealth.h"


// Sets default values
AItemHealth::AItemHealth()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AItemHealth::BeginPlay()
{
	Super::BeginPlay();
	Type = 0;
	HealthItems = FMath::RandRange(5,20);
}

// Called every frame
void AItemHealth::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

