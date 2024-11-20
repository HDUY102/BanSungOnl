// Fill out your copyright notice in the Description page of Project Settings.


#include "Rifle.h"

#include "Kismet/GameplayStatics.h"


// Sets default values
ARifle::ARifle()
{
	bReplicates = true;
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SB_ReloadRifle = Cast<USoundBase>(StaticLoadObject(USoundBase::StaticClass(),NULL,TEXT("*///Script/Engine.SoundCue'/Game/MilitaryWeapDark/Sound/Rifle/Rifle_ReloadInsert_Cue.Rifle_ReloadInsert_Cue'")));
	SB_ShootRifle = Cast<USoundBase>(StaticLoadObject(USoundBase::StaticClass(),NULL,TEXT("*//Script/Engine.SoundCue'/Game/MilitaryWeapDark/Sound/Rifle/RifleB_FireEnd_Cue.RifleB_FireEnd_Cue'")));
}

// Called when the game starts or when spawned
void ARifle::BeginPlay()
{
	Super::BeginPlay();
	Ammo = 150;
	MaxAmmo = 150;
	Magazine = 30;
	CurAmmo = 30;
	LastAmmo = 0;
	Damage = 20.f;
	Speed = 280.f;
}

void ARifle::ShootSound()
{
	UGameplayStatics::PlaySound2D(this, SB_ShootRifle);
}

void ARifle::ReloadSound()
{
	UGameplayStatics::PlaySound2D(this, SB_ReloadRifle);
}

// Called every frame
void ARifle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
