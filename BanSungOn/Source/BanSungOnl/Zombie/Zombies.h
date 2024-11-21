// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BanSungOnl/BanSungOnlCharacter.h"
#include "Components/SphereComponent.h"
#include "Components/WidgetComponent.h"
#include "GameFramework/Character.h"
#include "Kismet/KismetSystemLibrary.h"
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

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Coli")
	USphereComponent* SphereComponent;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Atk
	UFUNCTION(Server,Unreliable)
	void Server_AtkCharacter();
	UPROPERTY(BlueprintReadOnly,Replicated)
	bool CanAtk=false;
	bool Attack=false;
	
	// Display HealthBar
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "UI", meta = (AllowPrivateAccess = "true"))
	UWidgetComponent* WidgetComponent;
	
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UFUNCTION()
	void TakeDmg(float Dmg);

	UFUNCTION(BlueprintCallable)
	void OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
	void OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex);
};
