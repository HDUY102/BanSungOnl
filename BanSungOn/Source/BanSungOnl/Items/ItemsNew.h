// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items.h"
#include "ItemsNew.generated.h"

UCLASS()
class BANSUNGONL_API AItemsNew : public AItems
{
	GENERATED_BODY()
public:
	// Sets default values for this actor's properties
	AItemsNew();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
