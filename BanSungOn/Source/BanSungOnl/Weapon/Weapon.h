// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BanSungOnl/Projectitle/Bullet.h"
#include "GameFramework/Actor.h"
#include "Weapon.generated.h"

UCLASS()
class BANSUNGONL_API AWeapon : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AWeapon();
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	int LastAmmo;
	float Speed= 0, Damage, SpeedFire;
	bool bIsShoot;

	// Sound Shoot
	UPROPERTY()
	USoundBase* SB_ShootSound;
	// Sound Reload
	UPROPERTY()
	USoundBase* SB_ReloadSound;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(BlueprintReadWrite, Replicated)
	int Ammo;
	UPROPERTY(BlueprintReadOnly, Replicated)
	int CurAmmo;
	int Magazine,MaxAmmo;
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;
	
	void ReloadAmmo();
	UFUNCTION(Client, Unreliable)
	void Client_ShootSound();
	virtual void ShootSound();
	UFUNCTION(Client, Unreliable)
	void Client_ReloadSound();
	virtual void ReloadSound();

	UFUNCTION()
	void ResetAmmo();
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="BulletToSocket")
	USkeletalMeshComponent* GunMesh;
	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	TSubclassOf<ABullet> BulletSpawned;
	void ShootBullet(FVector &Location);
};
