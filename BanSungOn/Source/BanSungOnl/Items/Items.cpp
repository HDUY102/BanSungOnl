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
			if(Type == 0) // Item type for Health
			{
				PlayerCharacter->bPlusHealth=true;
				PlayerCharacter->Health = FMath::Min(PlayerCharacter->Health + HealthItems, PlayerCharacter->MaxHealth);
			}
			else if(Type == 1) // Item type for Rifle Ammo
			{
				if(PlayerCharacter->Rifle)
					PlayerCharacter->Rifle->Ammo = FMath::Min(PlayerCharacter->Rifle->Ammo + AmmoItem, PlayerCharacter->Rifle->MaxAmmo);
			}else if(Type == 2) // Item type for Pistol Ammo
			{
				if(PlayerCharacter->Pistol)
					PlayerCharacter->Pistol->Ammo = FMath::Min(PlayerCharacter->Pistol->Ammo + AmmoItem, PlayerCharacter->Pistol->MaxAmmo);
			}
			if (PlayerCharacter->IsLocallyControlled())
			{
				NotifyItemsPickup(PlayerCharacter, static_cast<int32>(Type));
			}
			Destroy();
		}
	}
}

void AItems::SpawnItems()
{
	GetWorld()->SpawnActor<AItems>(ItemsToSpawn,FVector::ZeroVector,FRotator::ZeroRotator);
}

void AItems::NotifyItemsPickup_Implementation(ABanSungOnlCharacter* Player, int32 ItemType)
{
	if(!HasAuthority())
	{
		Player->ShowNameItem.Broadcast(ItemType);
	}
}

// Called every frame
void AItems::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AItems::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AItems, Type);
}
