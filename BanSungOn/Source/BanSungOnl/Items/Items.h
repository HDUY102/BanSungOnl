// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BanSungOnl/BanSungOnlCharacter.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Actor.h"
#include "GameFramework/RotatingMovementComponent.h"
#include "Items.generated.h"

UCLASS(BlueprintType)
class BANSUNGONL_API AItems : public AActor
{
	GENERATED_BODY()

public:
	AItems();

protected:
	virtual void BeginPlay() override;

	// Items's Var basic
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ItemsProperties", Replicated)
	float Type;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ItemsProperties")
	float HealthItems;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ItemsProperties")
	int AmmoItem;

	// Create items rotate
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "RotatingMovement")
	URotatingMovementComponent* RotatingMovement;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Coli")
	USphereComponent* SphereComponent;
	UFUNCTION(BlueprintCallable)
	void OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void SpawnItems();
	UPROPERTY(EditAnywhere, Category="ItemsSpawn")
	TSubclassOf<AItems> ItemsToSpawn;

	UFUNCTION(Client, Unreliable)
	void NotifyItemsPickup(ABanSungOnlCharacter* Player, int32 ItemType);
	
public:
	virtual void Tick(float DeltaTime) override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};
