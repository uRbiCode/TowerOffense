// Created by Patryk Urbañski 2021
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

	void UpdateTargetTurretCount();
	void UpdatePlayerPawnsCount();

public:
	AOffenseGameModeBase();

	void ActorDied(AActor* DeadActor);	
	void UpdateEndGameTanks(APawnTank* Tank);

	UFUNCTION(BlueprintImplementableEvent, Category = "GlobalEvents")
	void HandleGameOver();

	UFUNCTION(BlueprintCallable, Category = "Getters")
	int32 GetInitialTanksCount();
	UFUNCTION(BlueprintCallable, Category = "Getters")
	int32 GetInitialTurretsCount();
	UFUNCTION(BlueprintCallable, Category = "Getters")
	int32 GetCurrentTanksCount();
	UFUNCTION(BlueprintCallable, Category = "Getters")
	int32 GetCurrentTurretsCount();
	UFUNCTION(BlueprintCallable, Category = "Getters")
	int32 GetCurrentEndGameTanksCount();
};
