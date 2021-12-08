// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PawnBase.h"
#include "PawnTurret.generated.h"

class APawnTank;

UCLASS()
class TOWEROFFENSE_API APawnTurret : public APawnBase
{
	GENERATED_BODY()

private:
	void PopulateEnemyList() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void HandleDestruction() override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
