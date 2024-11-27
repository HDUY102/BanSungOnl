// Copyright Epic Games, Inc. All Rights Reserved.

#include "BanSungOnlGameMode.h"
#include "BanSungOnlPlayerController.h"
#include "BanSungOnlCharacter.h"
#include "Components/CapsuleComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Net/UnrealNetwork.h"
#include "UObject/ConstructorHelpers.h"
#include "WaveSystem/WaveSystem.h"

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
		AWaveSystem* WaveAgain = Cast<AWaveSystem>(UGameplayStatics::GetActorOfClass(GetWorld(), AWaveSystem::StaticClass()));
		TArray<AActor*> Zombies;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), AZombies::StaticClass(), Zombies);
		for (auto Zombie : Zombies)
		{
			if (IsValid(Zombie))
			{
				Zombie->Destroy();
			}
		}
		for (auto PC : CPlayerAgain)
		{
			ABanSungOnlPlayerController* OnlPlayerController = Cast<ABanSungOnlPlayerController>(PC);
			if (IsValid(OnlPlayerController))
			{
				ABanSungOnlCharacter* PCCharacter = Cast<ABanSungOnlCharacter>(PC->GetPawn());

				if(PCCharacter->bIsGameWin)
				{
					OnlPlayerController->WinPlayAgain++;
				}
				if(PCCharacter->bIsGameOver)
				{
					OnlPlayerController->PlayAgain++;
				}
				
				if(PCCharacter)
				{
					PlayerList.Add(PCCharacter);
					
					if(PCCharacter->bIsGameOver)
					{
						PCCharacter->bIsDead = false;
						PCCharacter->bIsGameOver = false;
						PCCharacter->OriginalController->SetViewTargetWithBlend(PCCharacter, 0.5f, EViewTargetBlendFunction::VTBlend_Linear);
						PCCharacter->GetMesh()->SetVisibility(true, false);
						PCCharacter->GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
					}
					if(PCCharacter->bIsGameWin)
					{
						PCCharacter->bIsGameWin = false;
					}
					
					PCCharacter->Health = 50.f;
					PCCharacter->EquipRifle();
				}
			}
			WaveAgain->ZombRemaining = 0;
			WaveAgain->WaveNumber = 0;
			WaveAgain->SetupWave();
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

void ABanSungOnlGameMode::GameWin()
{
	for (auto PC : CPlayerAgain)
	{
		ABanSungOnlCharacter* PCCharacter = Cast<ABanSungOnlCharacter>(PC->GetPawn());
		PCCharacter->bIsGameWin = true;
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