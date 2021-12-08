// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PawnBase.h"
#include "PawnTank.generated.h"

class USpringArmComponent;
class UCameraComponent;

UCLASS()
class TOWEROFFENSE_API APawnTank : public APawnBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement", meta = (AllowPrivateAccess = "true"))
		float MoveSpeed = 100.f;

	FVector CalculateMovement(float Value);

	void PopulateEnemyList() override;
	void Move();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void HandleDestruction() override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
