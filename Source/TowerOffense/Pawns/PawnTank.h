// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "TowerOffense/GameStates/OffenseStateBase.h"
#include "GameplayTagContainer.h"
#include "CoreMinimal.h"
#include "PawnBase.h"
#include "PawnTank.generated.h"

UCLASS()
class TOWEROFFENSE_API APawnTank : public APawnBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement", meta = (AllowPrivateAccess = "true"))
		float MoveSpeed = 100.f;


	AOffenseStateBase* GameState;
	FVector CalculateMovement(float Value);

	void PopulateEnemyList() override;
	void Move();

public:
	UPROPERTY()
	FGameplayTagContainer TankTags;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void HandleDestruction() override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
