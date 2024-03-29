// Created by Patryk Urbański 2021

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "OffenseStateBase.generated.h"


UCLASS()
class TOWEROFFENSE_API AOffenseStateBase : public AGameStateBase
{
	GENERATED_BODY()

public:
	AOffenseStateBase();

	TArray<AActor*> EndGameTankActors;
	TArray<AActor*> TankActors;
	TArray<AActor*> TurretActors;

	int32 InitialTanksCount;
	int32 InitialTurretsCount;	
};
