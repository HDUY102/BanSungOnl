// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "GameFramework/Character.h"
#include "Zombies.generated.h"

UCLASS()
class BANSUNGONL_API AZombies : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AZombies();
	UPROPERTY(BlueprintReadOnly, Replicated)
	float HealthZomb;
	UPROPERTY(Replicated)
	float DamageZomb;
	UPROPERTY(BlueprintReadOnly)
	float MaxHealthZomb;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Display HealthBar
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "UI", meta = (AllowPrivateAccess = "true"))
	UWidgetComponent* WidgetComponent;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};
