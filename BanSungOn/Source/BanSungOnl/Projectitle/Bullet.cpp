﻿// Fill out your copyright notice in the Description page of Project Settings.


#include "Bullet.h"

#include "BanSungOnl/Zombie/Zombies.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Net/UnrealNetwork.h"


// Sets default values
ABullet::ABullet()
{
	bReplicates = true;
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	SphereComponent->SetupAttachment(RootComponent);
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
		FVector NewLocation = GetActorLocation() + Direction * DeltaTime;
		SetActorLocation(NewLocation);
	}
}

void ABullet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ABullet, Direction);
	DOREPLIFETIME(ABullet, BulletSpeed);
}

void ABullet::SetBulletProperties(float Damage, float Speed)
{
	BulletDmg = Damage;
	BulletSpeed = Speed;
}

void ABullet::InitBull(float Dmg, float Speed, const FVector& NewDirection)
{
	SetBulletProperties(Dmg, Speed);
	SetDirectionBullet(NewDirection);

	SphereComponent->OnComponentBeginOverlap.AddDynamic(this, &ABullet::OnOverlap);
}

void ABullet::OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
                        int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (HasAuthority())
	{
		AZombies* Zombies = Cast<AZombies>(OtherActor);
		if(IsValid(Zombies))
		{
			ABanSungOnlCharacter* Shooter = Cast<ABanSungOnlCharacter>(GetOwner());
			Zombies->TakeDmg(BulletDmg, Shooter);
			FTimerHandle DestroyTimer;
			GetWorld()->GetTimerManager().SetTimer(DestroyTimer, this, &ABullet::DestroyBull, 0.05f, false);
		}
	}
}

void ABullet::DestroyBull()
{
	Destroy();
}

void ABullet::SetDirectionBullet_Implementation(const FVector NewDirection)
{
	Direction = NewDirection - GetActorLocation();
	Direction.Normalize();
	Direction *= BulletSpeed;
	Direction.Z = 0.f;
}

