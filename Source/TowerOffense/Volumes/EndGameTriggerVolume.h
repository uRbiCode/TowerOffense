// Created by Patryk Urbański 2021

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerVolume.h"
#include "EndGameTriggerVolume.generated.h"

class AOffenseGameModeBase;

UCLASS()
class TOWEROFFENSE_API AEndGameTriggerVolume : public ATriggerVolume
{
	GENERATED_BODY()	

	AOffenseGameModeBase* GameMode;

public:
	AEndGameTriggerVolume();

protected:
	UFUNCTION()
	void OnOverlapBegin(AActor* OverlappedActor, AActor* OverlappingActor);

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
