// Fill out your copyright notice in the Description page of Project Settings.


#include "Zombies.h"

#include <string>

#include "BanSungOnl/BanSungOnlCharacter.h"
#include "Engine/RendererSettings.h"
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
	SphereComponent->OnComponentEndOverlap.AddDynamic(this, &AZombies::OnEndOverlap);
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
	Server_AtkCharacter();
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
	DOREPLIFETIME(AZombies, CanAtk);
}

void AZombies::TakeDmg(float Dmg)
{
	HealthZomb -= Dmg;
	if(HealthZomb<0)
	{
		Destroy();
	}
}

void AZombies::OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (HasAuthority())
	{
		ABanSungOnlCharacter* PlayerCharacter = Cast<ABanSungOnlCharacter>(OtherActor);
		if(PlayerCharacter && PlayerCharacter->Health>0.f)
		{
			FVector DirectionToPlayer = (PlayerCharacter->GetActorLocation() - GetActorLocation()).GetSafeNormal();
			FRotator LookAtRotation = DirectionToPlayer.Rotation();

			SetActorRotation(LookAtRotation);
			CanAtk = true;
			Server_AtkCharacter();
		}
	}
}

void AZombies::OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex)
{
	ABanSungOnlCharacter* PlayerCharacter = Cast<ABanSungOnlCharacter>(OtherActor);
	if (PlayerCharacter)
	{
		CanAtk = false;
	}
}

void AZombies::Server_AtkCharacter_Implementation()
{
	FVector Start = GetMesh()->GetSocketLocation(FName("A"));
	FVector End = GetMesh()->GetSocketLocation(FName("B"));

	TArray<AActor*> IgnoreActors;
	IgnoreActors.Add(this); 
	FHitResult HitResult;
	bool bHit = UKismetSystemLibrary::LineTraceSingle(GetWorld(),Start,End,
		static_cast<ETraceTypeQuery>(ECollisionChannel::ECC_Pawn), 
		false,
		IgnoreActors,
		EDrawDebugTrace::ForDuration,
		HitResult,
		true);
	if (bHit)
	{
		ABanSungOnlCharacter* PlayerCharacter = Cast<ABanSungOnlCharacter>(HitResult.GetActor());
		if (PlayerCharacter && !Attack)
		{
			FTimerHandle CanAttackTime;
			Attack = true;
			PlayerCharacter->PlayerTakeDmg(DamageZomb);
			GetWorld()->GetTimerManager().SetTimer(CanAttackTime, [this]() { Attack = false; }, 2.0f, false);
		}
	}
}