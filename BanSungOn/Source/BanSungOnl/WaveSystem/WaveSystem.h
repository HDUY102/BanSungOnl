// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BanSungOnl/Zombie/ZombiesBoss.h"
#include "BanSungOnl/Zombie/ZombiesNor.h"
#include "GameFramework/Actor.h"
#include "WaveSystem.generated.h"

UCLASS()
class BANSUNGONL_API AWaveSystem : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AWaveSystem();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	int32 ZombNor, ZombBoss;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<AZombiesNor> ZombNorSpawn;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<AZombiesBoss> ZombBossSpawn;

	TArray<FVector> SpawnLocations;

	UFUNCTION()
	void SpawnZombies();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UPROPERTY()
	int ZombRemaining;
	
	UPROPERTY()
	int WaveNumber = 0;
	
	UFUNCTION()
	void SetupWave();
	
	UFUNCTION()
	void CheckEndWave();

	UFUNCTION()
	void HandleZombieDeath();
};
