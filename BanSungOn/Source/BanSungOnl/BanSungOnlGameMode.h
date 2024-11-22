// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "BanSungOnlCharacter.h"
#include "GameFramework/GameModeBase.h"
#include "BanSungOnlGameMode.generated.h"

UCLASS(minimalapi)
class ABanSungOnlGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ABanSungOnlGameMode();

	int Restart = 0;

	UFUNCTION()
	void PlayAgain();
	
	UPROPERTY(BlueprintReadOnly, Category="Players")
	TArray<ABanSungOnlCharacter*> PlayerList;

	UPROPERTY(BlueprintReadOnly, Category="Players")
	TArray<AController*> CPlayerAgain;
	
	virtual void OnPostLogin(AController* NewPlayer) override;
	
	UFUNCTION(BlueprintCallable,Category="Game Management")
	void AddPlayer(ABanSungOnlCharacter* Player);
	UFUNCTION(BlueprintCallable,Category="Game Management")
	void DelPlayer(ABanSungOnlCharacter* Player);
	UFUNCTION(BlueprintCallable, Category = "Players")
	TArray<ABanSungOnlCharacter*> GetAlivePlayers();
};
