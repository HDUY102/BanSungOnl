// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "BanSungOnlCharacter.h"
#include "GameFramework/GameModeBase.h"
#include "BanSungOnlGameMode.generated.h"
DECLARE_DELEGATE_RetVal(TArray<ABanSungOnlCharacter*>, FOnPlayerDead);
UCLASS(minimalapi, Blueprintable, BlueprintType)
class ABanSungOnlGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ABanSungOnlGameMode();

	int Restart = 0;

	UFUNCTION()
	void PlayAgain();

	UFUNCTION()
	void GameOver();

	UFUNCTION()
	void GameWin();
	
	UPROPERTY(BlueprintReadOnly, Category="Players")
	TArray<AController*> CPlayerAgain;
	
	virtual void OnPostLogin(AController* NewPlayer) override;
	
	UPROPERTY(BlueprintReadOnly, Category="Players")
	TArray<ABanSungOnlCharacter*> PlayerList;

	FOnPlayerDead OnPlayerDead;
	UFUNCTION(BlueprintCallable, Category = "Players")
	TArray<ABanSungOnlCharacter*> GetAlivePlayers();
};
