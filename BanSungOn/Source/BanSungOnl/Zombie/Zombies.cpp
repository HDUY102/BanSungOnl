// Fill out your copyright notice in the Description page of Project Settings.


#include "Zombies.h"

#include <string>

#include "BanSungOnl/BanSungOnlCharacter.h"
#include "BanSungOnl/BanSungOnlPlayerController.h"
#include "BanSungOnl/Items/ItemAmmoPis.h"
#include "BanSungOnl/Items/ItemAmmoRif.h"
#include "BanSungOnl/Items/Items.h"
#include "BanSungOnl/Items/ItemsNew.h"
#include "BanSungOnl/WaveSystem/WaveSystem.h"
#include "Components/CapsuleComponent.h"
#include "Engine/RendererSettings.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Net/UnrealNetwork.h"


// Sets default values
AZombies::AZombies()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Craete Widget to display HealthBar
	WidgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("HealthWidget"));
	WidgetComponent->SetupAttachment(RootComponent);

	// Sphere
	SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	SphereComponent->SetupAttachment(RootComponent);
	SphereComponent->OnComponentBeginOverlap.AddDynamic(this, &AZombies::OnOverlap);
	SphereComponent->OnComponentEndOverlap.AddDynamic(this, &AZombies::EndOverlap);
}

// Called when the game starts or when spawned
void AZombies::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AZombies::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	// Server_AtkCharacter();
} 

// Called to bind functionality to input
void AZombies::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void AZombies::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AZombies, HealthZomb);
	DOREPLIFETIME(AZombies, DamageZomb);
	DOREPLIFETIME(AZombies, PlayerList);
}

void AZombies::TakeDmg(float Dmg, ABanSungOnlCharacter* Shooter)
{
	HealthZomb -= Dmg;
	if(HealthZomb <= 0)
	{
		Shooter->Score++;
		AWaveSystem* WaveSystem = Cast<AWaveSystem>(UGameplayStatics::GetActorOfClass(GetWorld(), AWaveSystem::StaticClass()));
		
		FVector BodyZombie = GetActorLocation() + FVector(0.f, 0.f, -10.f);
		if (FMath::RandRange(1, 2) == 1)
		{
			RandomItems(BodyZombie);
		}
		OnZombieDeath.ExecuteIfBound();
		Destroy();
	}
}

void AZombies::RandomItems(FVector BodyZombie)
{
	TypeItem =  static_cast<EnumItems>(FMath::RandRange(0,2));
	switch (TypeItem)
	{
	case EnumItems::Health:
		GetWorld()->SpawnActor<AItemsNew>(HealthToSpawn, BodyZombie,FRotator::ZeroRotator);
		break;
	case EnumItems::AmmoRif:
		GetWorld()->SpawnActor<AItemAmmoRif>(RifToSpawn, BodyZombie,FRotator::ZeroRotator);
		break;
	case EnumItems::AmmoPis:
		GetWorld()->SpawnActor<AItemAmmoPis>(PisToSpawn, BodyZombie,FRotator::ZeroRotator);
		break;
	default:
		break;
	}
}

void AZombies::OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
                         int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	ABanSungOnlCharacter* PlayerCharacter = Cast<ABanSungOnlCharacter>(OtherActor);
	if(PlayerCharacter && PlayerCharacter->Health>0.f)
	{
		FVector DirectionToPlayer = (PlayerCharacter->GetActorLocation() - GetActorLocation()).GetSafeNormal();
		FRotator LookAtRotation = DirectionToPlayer.Rotation();

		SetActorRotation(LookAtRotation);
		PlayerList.Add(PlayerCharacter);
	}
}

void AZombies::EndOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor,
	class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	ABanSungOnlCharacter* PlayerCharacter = Cast<ABanSungOnlCharacter>(OtherActor);
	if(PlayerCharacter && PlayerCharacter->Health>0.f)
	{
		PlayerList.Remove(PlayerCharacter);
	}
}

//
// void AZombies::Server_AtkCharacter_Implementation()
// {
// 	FVector Start = GetMesh()->GetSocketLocation(FName("A"));
// 	FVector End = GetMesh()->GetSocketLocation(FName("B"));
//
// 	TArray<AActor*> IgnoreActors;
// 	IgnoreActors.Add(this); 
// 	FHitResult HitResult;
// 	bool bHit = UKismetSystemLibrary::LineTraceSingle(GetWorld(),Start,End,
// 		static_cast<ETraceTypeQuery>(ECollisionChannel::ECC_Pawn), 
// 		false,
// 		IgnoreActors,
// 		EDrawDebugTrace::ForDuration,
// 		HitResult,
// 		true);
// 	if (bHit)
// 	{
// 		ABanSungOnlCharacter* PlayerCharacter = Cast<ABanSungOnlCharacter>(HitResult.GetActor());
// 		if (PlayerCharacter && !Attack)
// 		{
// 			FTimerHandle CanAttackTime;
// 			Attack = true;
// 			PlayerCharacter->PlayerTakeDmg(DamageZomb);
// 			GetWorld()->GetTimerManager().SetTimer(CanAttackTime, [this]() { Attack = false; }, 2.2f, false);
// 		}
// 	}
// }