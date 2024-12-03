// Fill out your copyright notice in the Description page of Project Settings.


#include "Pistol.h"

#include "Kismet/GameplayStatics.h"


// Sets default values
APistol::APistol()
{
	bReplicates = true;
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SB_ShootPistol = Cast<USoundBase>(StaticLoadObject(USoundBase::StaticClass(),NULL,TEXT("*//Script/Engine.SoundCue'/Game/MilitaryWeapDark/Sound/Pistol/PistolB_Fire_Cue.PistolB_Fire_Cue'")));
	SB_ReloadPistol = Cast<USoundBase>(StaticLoadObject(USoundBase::StaticClass(),NULL,TEXT("*//Script/Engine.SoundCue'/Game/MilitaryWeapDark/Sound/Pistol/Pistol_ReloadInsert_Cue.Pistol_ReloadInsert_Cue'")));
}

// Called when the game starts or when spawned
void APistol::BeginPlay()
{
	Super::BeginPlay();
	Ammo = 50;
	MaxAmmo = 50;
	Magazine = 15;
	CurAmmo = 15;
	LastAmmo = 0;
	Damage = 10.f;
	Speed = 230.f;
	SpeedFire = 0.5f;
}

void APistol::ShootSound()
{
	UGameplayStatics::PlaySound2D(this, SB_ShootPistol);
}

void APistol::ReloadSound()
{
	UGameplayStatics::PlaySound2D(this, SB_ReloadPistol);	
}

// Called every frame
void APistol::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

