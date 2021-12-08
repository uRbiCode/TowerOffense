// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "OffenseGameModeBase.generated.h"

class APawnTurret;
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

	int32 GetTargetTurretCount();
	int32 GetPlayerPawnsCount();
	void HandleGameStart();
	void HandleGameOver(bool PlayerWon);

public:
	void ActorDied(AActor* DeadActor);

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Game Loop")
		int32 StartDelay = 3;

	virtual void BeginPlay() override;
};
