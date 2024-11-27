// Fill out your copyright notice in the Description page of Project Settings.


#include "WaveSystem.h"

#include "BanSungOnl/BanSungOnlGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "Net/UnrealNetwork.h"

// Sets default values
AWaveSystem::AWaveSystem()
{
	bReplicates = true;
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AWaveSystem::BeginPlay()
{
	Super::BeginPlay();

	// SpawnLocations.Add(FVector(-5700.547414, 4292.01781, 7318.399024)); // Location for wave 1
	// SpawnLocations.Add(FVector(-3773.596643, 187.071928, 8071.220918)); // Location for wave 2
	// SpawnLocations.Add(FVector(796.403357, 267.071928, 8301.220918)); // Location for wave 3

	SpawnLocations.Add(FVector(1120.0, 1330.0, 90.0)); // Location for wave 1
	SpawnLocations.Add(FVector(1120.0, 1330.0, 90.0)); // Location for wave 2
	SpawnLocations.Add(FVector(1120.0, 1330.0, 90.0)); // Location for wave 3
	
	SetupWave();
}

void AWaveSystem::SetupWave()
{
	WaveNumber++;
	switch (WaveNumber)
	{
		case 1:
			ZombNor = 1;
			ZombBoss = 0;
			break;
		case 2:
			ZombNor = 2;
			ZombBoss = 0;
			break;
		case 3:
			ZombNor = 3;
			ZombBoss = 1;
			break;
	}
	ZombRemaining = ZombNor + ZombBoss;
	SpawnZombies();
}

void AWaveSystem::SpawnZombies()
{
	if(WaveNumber - 1 < SpawnLocations.Num() && HasAuthority())
	{
		FVector SpawnLocation = SpawnLocations[WaveNumber - 1];
		FVector SpawnLocationOffset = SpawnLocation;
		FActorSpawnParameters SpawnInfo;
		SpawnInfo.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	
		for(int32 i = 0; i < ZombNor; i++)
		{
			SpawnLocationOffset = SpawnLocation + i * FVector(100,0,2);
			AZombies* NewZombie = GetWorld()->SpawnActor<AZombiesNor>(ZombNorSpawn, SpawnLocation,FRotator(0,0,110.0f), SpawnInfo);
		}
		for (int32 i = 0; i < ZombBoss; i++)
		{
			AZombies* NewZombie = GetWorld()->SpawnActor<AZombiesBoss>(ZombBossSpawn, SpawnLocationOffset, FRotator::ZeroRotator, SpawnInfo);
		}
	}
}

void AWaveSystem::CheckEndWave()
{
	ABanSungOnlCharacter* Character = Cast<ABanSungOnlCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	if (ZombRemaining <= 0)
	{
		if(WaveNumber == 3)
		{
			if (Character)
			{
				ABanSungOnlGameMode* GameWin = Cast<ABanSungOnlGameMode>(UGameplayStatics::GetGameMode(GetWorld()));
				WaveNumber = 0;
				GameWin->GameWin();
			}
		}
		else
		{
			FTimerHandle WaveTimerHandle;  
			GetWorld()->GetTimerManager().SetTimer(WaveTimerHandle, this, &AWaveSystem::SetupWave, 3.f, false);
		}
	}  
}

// Called every frame
void AWaveSystem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// void AWaveSystem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
// {
// 	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
// 	DOREPLIFETIME(AWaveSystem, WaveNumber);
// 	DOREPLIFETIME(AWaveSystem, ZombRemaining);
// }

