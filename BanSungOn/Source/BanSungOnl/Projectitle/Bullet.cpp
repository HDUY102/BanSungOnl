// Fill out your copyright notice in the Description page of Project Settings.


#include "Bullet.h"

#include "Net/UnrealNetwork.h"


// Sets default values
ABullet::ABullet()
{
	bReplicates = true;
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ABullet::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(HasAuthority())
	{
		FVector NewLocation = GetActorLocation() + Direction * BulletSpeed * DeltaTime;
		SetActorLocation(NewLocation);
	}
}

void ABullet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ABullet, Direction);
	DOREPLIFETIME(ABullet, BulletDmg);
	DOREPLIFETIME(ABullet, BulletSpeed);
}

void ABullet::SetBulletProperties_Implementation(float Damage, float Speed)
{
	BulletDmg = Damage;
	BulletSpeed = Speed;
}

void ABullet::SetDirectionBullet_Implementation(const FVector NewDirection)
{
	Direction = (NewDirection - GetActorLocation()).GetSafeNormal();
	Direction *= BulletSpeed;
	Direction.Z = 0.f;
}

