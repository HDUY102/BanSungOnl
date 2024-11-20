// Fill out your copyright notice in the Description page of Project Settings.


#include "Zombies.h"

#include "BanSungOnl/BanSungOnlCharacter.h"
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
	ABanSungOnlCharacter* PlayerCharacter = Cast<ABanSungOnlCharacter>(OtherActor);
	if(PlayerCharacter)
	{
		FVector DirectionToPlayer = (PlayerCharacter->GetActorLocation() - GetActorLocation()).GetSafeNormal();
		FRotator LookAtRotation = DirectionToPlayer.Rotation();

		SetActorRotation(LookAtRotation);
		CanAtk = true;
		Server_AtkCharacter();
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
	FVector End = GetMesh()->GetSocketLocation(FName("RightHandMiddle1"));

	FHitResult HitResult;
	TArray<AActor*> ActorsToIgnore;
	ActorsToIgnore.Add(this);
	
	bool bHit = UKismetSystemLibrary::LineTraceSingle(GetWorld(),Start,End,
			static_cast<ETraceTypeQuery>(ECollisionChannel::ECC_Pawn),
			false,
			ActorsToIgnore,
			EDrawDebugTrace::Persistent,
			HitResult,
			true);
	UKismetSystemLibrary::PrintString(this, bHit ? TEXT("true") : TEXT("false"));
	if (bHit)
	{
		ABanSungOnlCharacter* PlayerCharacter = Cast<ABanSungOnlCharacter>(HitResult.GetActor());
		if (PlayerCharacter)
		{
			// FTimerHandle CanAttackTime;
			// CanAtk = true;
			PlayerCharacter->Health -= DamageZomb;
			PlayerCharacter->ShowHealth.Broadcast(); // Player is Attacked
			UKismetSystemLibrary::PrintString(this, "Check");
			// GetWorld()->GetTimerManager().SetTimer(CanAttackTime, [this]() { CanAtk = false; }, 2.0f, false);
		}
	}
}