// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bullet.generated.h"

UCLASS()
class BANSUNGONL_API ABullet : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABullet();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	
	UPROPERTY(Replicated)
	float BulletSpeed;
	UPROPERTY(Replicated)
	float BulletDmg;
	UPROPERTY(Replicated)
	FVector Direction;
	UFUNCTION(Server, Unreliable)
	void SetBulletProperties(float Damage, float Speed);
	UFUNCTION(Server, Unreliable)
	void SetDirectionBullet(const FVector NewDirection);
};
