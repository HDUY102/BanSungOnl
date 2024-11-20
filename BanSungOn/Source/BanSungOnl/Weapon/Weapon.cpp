// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon.h"

#include "BanSungOnl/Projectitle/Bullet.h"
#include "Kismet/GameplayStatics.h"
#include "Net/UnrealNetwork.h"


// Sets default values
AWeapon::AWeapon()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	GunMesh = CreateDefaultSubobject<USkeletalMeshComponent>("GunMesh");
	GunMesh->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AWeapon::BeginPlay()
{
	Super::BeginPlay();
}

void AWeapon::ShootSound()
{
	if (SB_ShootSound)
	{
		UGameplayStatics::PlaySound2D(this, SB_ShootSound);
	}
}

void AWeapon::ReloadSound()
{
	if (SB_ReloadSound)
	{
		UGameplayStatics::PlaySound2D(this, SB_ReloadSound);
	}
}

void AWeapon::ShootBullet(FVector &Location)
{
	if(CurAmmo>0)
	{
		FTransform	BulletTransform = GunMesh->GetSocketTransform("BulletToSocket");
	
		FActorSpawnParameters spawnParams;
		spawnParams.Owner = this;
	
		ABullet* SpawnedBullet = GetWorld()->SpawnActor<ABullet>(BulletSpawned,BulletTransform);
		SpawnedBullet->SetBulletProperties(Damage, Speed);
		SpawnedBullet->SetDirectionBullet(Location);
		CurAmmo--;
	}
}

// Called every frame
void AWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AWeapon::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AWeapon, Ammo);
	DOREPLIFETIME(AWeapon, CurAmmo);
}

void AWeapon::ReloadAmmo()
{
	LastAmmo = CurAmmo;
	CurAmmo += FMath::Min(Ammo,(Magazine-LastAmmo));
	Ammo -= FMath::Min(Ammo,(Magazine-LastAmmo));
}
