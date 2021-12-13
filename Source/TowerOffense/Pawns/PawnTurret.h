// Created by Patryk Urbañski 2021

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
