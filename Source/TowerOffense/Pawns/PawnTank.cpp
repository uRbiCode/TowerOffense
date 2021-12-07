// Fill out your copyright notice in the Description page of Project Settings.
#include "PawnTank.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Kismet/GameplayStatics.h"
#include "PawnTurret.h"

FVector APawnTank::CalculateMovement(float Value)
{
	return FVector(Value * GetWorld()->DeltaTimeSeconds , 0, 0);
}

void APawnTank::PopulateEnemyList()
{
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), APawnTurret::StaticClass(), EnemyList);
}

void APawnTank::Move()
{
	AddActorLocalOffset(CalculateMovement(MoveSpeed), true);
}

// Called when the game starts or when spawned
void APawnTank::BeginPlay()
{
	Super::BeginPlay();

	//create firing timer based on FireRate
	GetWorld()->GetTimerManager().SetTimer(FireRateTimerHandle, this, &APawnTank::CheckFireCondition, FireRate, true);

	PopulateEnemyList();
	AcquireTarget(FireRange);
}

void APawnTank::HandleDestruction()
{
	Super::HandleDestruction();
}

// Called every frame
void APawnTank::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Move();

	if (!IsValid(CurrentTarget) || ReturnDistanceToEnemy(CurrentTarget) > FireRange)
	{
		PopulateEnemyList();
		AcquireTarget(FireRange);
	}
	if (IsValid(CurrentTarget))
	{
		RotateTurret(CurrentTarget->GetActorLocation());
	}
}
