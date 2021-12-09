// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "TowerOffense/GameStates/OffenseStateBase.h"
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "OffenseGameModeBase.generated.h"

class APawnTank;

UCLASS()
class TOWEROFFENSE_API AOffenseGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

private:
	TArray<AActor*> TankActors;
	TArray<AActor*> TurretActors;

	int32 InitialPlayerPawns;
	int32 InitialTargetTurrets;

	//updates and returns current turrets count
	int32 UpdateTargetTurretCount();
	
	//updates and returns current player pawns (tanks) count
	int32 UpdatePlayerPawnsCount();
	void HandleGameStart();
	void HandleGameOver(bool PlayerWon);

public:
	AOffenseGameModeBase();
	void ActorDied(AActor* DeadActor);
	UFUNCTION(BluePrintCallable)
	virtual void UpdateEndGameTanks(APawnTank* Tank);

	int32 GetInitialPlayerPawns() { return InitialPlayerPawns; };
	int32 GetInitialTargetTurrets() { return InitialTargetTurrets; };

	void CheckEndGameConditions(int32 TanksCount);

protected:
	virtual void BeginPlay() override;
};
