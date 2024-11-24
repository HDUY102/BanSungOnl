// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemAmmoRif.h"


// Sets default values
AItemAmmoRif::AItemAmmoRif()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AItemAmmoRif::BeginPlay()
{
	Super::BeginPlay();
	Type = 1;
	AmmoItem = FMath::RandRange(5,30);
}

// Called every frame
void AItemAmmoRif::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

