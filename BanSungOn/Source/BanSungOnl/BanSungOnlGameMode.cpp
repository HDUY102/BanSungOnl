// Copyright Epic Games, Inc. All Rights Reserved.

#include "BanSungOnlGameMode.h"
#include "BanSungOnlPlayerController.h"
#include "BanSungOnlCharacter.h"
#include "Components/CapsuleComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Net/UnrealNetwork.h"
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
		for (auto PC : CPlayerAgain)
		{
			ABanSungOnlPlayerController* OnlPlayerController = Cast<ABanSungOnlPlayerController>(PC);
			if (IsValid(OnlPlayerController))
			{
				OnlPlayerController->PlayAgain++;

				ABanSungOnlCharacter* PCCharacter = Cast<ABanSungOnlCharacter>(PC->GetPawn());
				if(PCCharacter)
				{
					PlayerList.Add(PCCharacter);
					
					PCCharacter->Health = 50.f;
					PCCharacter->bIsDead = false;
					PCCharacter->bIsGameOver = false;
					
					PCCharacter->GetMesh()->SetVisibility(true, false);
					PCCharacter->GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
					
					PCCharacter->EquipRifle();
					
					PCCharacter->OriginalController->SetViewTargetWithBlend(PCCharacter, 0.5f, EViewTargetBlendFunction::VTBlend_Linear);
				}
			}
		}
	}
}

void ABanSungOnlGameMode::GameOver()
{
	for (auto PC : CPlayerAgain)
	{
		ABanSungOnlCharacter* PCCharacter = Cast<ABanSungOnlCharacter>(PC->GetPawn());
		PCCharacter->bIsGameOver = true;
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