// Fill out your copyright notice in the Description page of Project Settings.


#include "Items.h"

#include "BanSungOnl/BanSungOnlCharacter.h"
#include "GameFramework/RotatingMovementComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Net/UnrealNetwork.h"

// Sets default values
AItems::AItems()
{
	bReplicates = true;
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	SphereComponent->SetupAttachment(RootComponent);
	SphereComponent->OnComponentBeginOverlap.AddDynamic(this, &AItems::OnOverlap);
	
	RotatingMovement = CreateDefaultSubobject<URotatingMovementComponent>(TEXT("RotatingMovement"));
}

// Called when the game starts or when spawned
void AItems::BeginPlay()
{
	Super::BeginPlay();
	
}

void AItems::OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if(HasAuthority())
	{
		ABanSungOnlCharacter* PlayerCharacter = Cast<ABanSungOnlCharacter>(OtherActor);
		if (PlayerCharacter)
		{
			if(Type == 0) // Item type for Rifle Ammo
			{
				if(PlayerCharacter->Health < PlayerCharacter->MaxHealth) PlayerCharacter->Health += HealthItems;
				else PlayerCharacter->Health = PlayerCharacter->MaxHealth;
				// PlayerCharacter->ShowNameItem.Broadcast(0);
			}else if(Type == 1)
			{
				if((PlayerCharacter->Rifle->Ammo + AmmoItem) <= PlayerCharacter->Rifle->MaxAmmo) PlayerCharacter->Rifle->Ammo += AmmoItem;
				else PlayerCharacter->Rifle->Ammo = PlayerCharacter->Rifle->MaxAmmo;
				// PlayerCharacter->ShowNameItem.Broadcast(1);
			}else if(Type == 2) // Item type for Pistol Ammo
			{
				if((PlayerCharacter->Pistol->Ammo + AmmoItem) <= PlayerCharacter->Pistol->MaxAmmo) PlayerCharacter->Pistol->Ammo += AmmoItem;
				else PlayerCharacter->Pistol->Ammo = PlayerCharacter->Pistol->MaxAmmo;
				// PlayerCharacter->ShowNameItem.Broadcast(2);
			}
			Destroy();
		}
	}
}

void AItems::SpawnItems()
{
	GetWorld()->SpawnActor<AItems>(ItemsToSpawn,FVector::ZeroVector,FRotator::ZeroRotator);
}

// Called every frame
void AItems::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AItems::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	// DOREPLIFETIME(AItems, Type);
}

