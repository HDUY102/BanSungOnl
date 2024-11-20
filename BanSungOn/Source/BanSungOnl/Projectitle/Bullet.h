// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Actor.h"
#include "Bullet.generated.h"

UCLASS()
class BANSUNGONL_API ABullet : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABullet();
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Coli")
	USphereComponent* SphereComponent;
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

	UFUNCTION(BlueprintCallable)
	void OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
