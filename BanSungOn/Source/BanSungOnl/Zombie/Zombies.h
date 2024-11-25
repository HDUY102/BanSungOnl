// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BanSungOnl/BanSungOnlCharacter.h"
#include "BanSungOnl/Items/ItemAmmoPis.h"
#include "BanSungOnl/Items/ItemAmmoRif.h"
#include "BanSungOnl/Items/ItemHealth.h"
#include "BanSungOnl/Items/Items.h"
#include "Components/SphereComponent.h"
#include "Components/WidgetComponent.h"
#include "GameFramework/Character.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Zombies.generated.h"

UENUM(BlueprintType)
enum class EnumItems : uint8
{
	Health UMETA(DisplayName = "Item Health"),
	AmmoRif UMETA(DisplayName = "Item Rif"),
	AmmoPis UMETA(DisplayName = "Item Pis"),
};

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

	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category="ItemsSpawn")
	TSubclassOf<AItemHealth> HealthToSpawn;
	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category="ItemsSpawn")
	TSubclassOf<AItemAmmoPis> PisToSpawn;
	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category="ItemsSpawn")
	TSubclassOf<AItemAmmoRif> RifToSpawn;
	
	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	EnumItems TypeItem;
	
	UFUNCTION()
	void RandomItems(FVector BodyZombie);
	
	UFUNCTION(BlueprintCallable)
	void OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
	void OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex);
};
