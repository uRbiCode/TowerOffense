// Fill out your copyright notice in the Description page of Project Settings.

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
	void UpdateTargetTurretCount();
	void UpdatePlayerPawnsCount();	

	void CheckEndGameConditions();
	void HandleGameOver();

	int32 GetInitialTanksCount();
	int32 GetInitialTurretsCount();
	int32 GetCurrentTanksCount();
	int32 GetCurrentTurretsCount();

public:
	AOffenseGameModeBase();

	void ActorDied(AActor* DeadActor);	
	void UpdateEndGameTanks(APawnTank* Tank);
};
