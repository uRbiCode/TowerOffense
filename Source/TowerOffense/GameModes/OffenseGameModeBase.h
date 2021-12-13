// Created by Patryk Urba�ski 2021
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "OffenseGameModeBase.generated.h"

class APawnTank;

UCLASS()
class TOWEROFFENSE_API AOffenseGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

private:
	void CheckEndGameConditions();
	void HandleGameOver();

	void UpdateTargetTurretCount();
	void UpdatePlayerPawnsCount();

	int32 GetInitialTanksCount();
	int32 GetInitialTurretsCount();
	int32 GetCurrentTanksCount();
	int32 GetCurrentTurretsCount();
	int32 GetCurrentEndGameTanksCount();

public:
	AOffenseGameModeBase();

	void ActorDied(AActor* DeadActor);	
	void UpdateEndGameTanks(APawnTank* Tank);
};
