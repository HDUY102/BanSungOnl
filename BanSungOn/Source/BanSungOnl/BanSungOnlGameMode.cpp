// Copyright Epic Games, Inc. All Rights Reserved.

#include "BanSungOnlGameMode.h"
#include "BanSungOnlPlayerController.h"
#include "BanSungOnlCharacter.h"
#include "Kismet/KismetSystemLibrary.h"
#include "UObject/ConstructorHelpers.h"

ABanSungOnlGameMode::ABanSungOnlGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ABanSungOnlPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownPlayerController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}

void ABanSungOnlGameMode::PlayAgain()
{
	Restart++;
	if (Restart == 2)
	{
		Restart = 0;
		UKismetSystemLibrary::PrintString(this, "play again");
		for (auto PC : CPlayerAgain)
		{
			ABanSungOnlPlayerController* OnlPlayerController = Cast<ABanSungOnlPlayerController>(PC);
			if (IsValid(OnlPlayerController))
			{
				OnlPlayerController->PlayAgain++;
				// OnPostLogin(OnlPlayerController);
			}
		}
	}
}

void ABanSungOnlGameMode::OnPostLogin(AController* NewPlayer)
{
	Super::OnPostLogin(NewPlayer);
	CPlayerAgain.Add(NewPlayer);
}

void ABanSungOnlGameMode::AddPlayer(ABanSungOnlCharacter* Player)
{
	if(!PlayerList.Contains(Player))
	{
		PlayerList.Add(Player);
	}
}

void ABanSungOnlGameMode::DelPlayer(ABanSungOnlCharacter* Player)
{
	if(Player)
	{
		PlayerList.Remove(Player);
	}
}

TArray<ABanSungOnlCharacter*> ABanSungOnlGameMode::GetAlivePlayers()
{
	TArray<ABanSungOnlCharacter*> AlivePlayers;
	for (ABanSungOnlCharacter* Player : PlayerList)
	{
		if (Player && !Player->bIsDead)
		{
			AlivePlayers.Add(Player);
		}
	}
	return AlivePlayers;
}