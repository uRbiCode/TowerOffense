// Fill out your copyright notice in the Description page of Project Settings.
#include "PawnTurret.h"
#include "Kismet/GameplayStatics.h"
#include "PawnTank.h"



void APawnTurret::CheckFireCondition()
{
	//// If Player == null || is dead then bail
	//if (!PlayerPawn)
	//{
	//	return;
	//}
	////If Player is in range then fire
	//if (ReturnDistanceToPlayer() <= FireRange)
	//{
	//	Fire();
	//}
}

void APawnTurret::PopulateEnemyList()
{
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), APawnTank::StaticClass(), EnemyList);
}

// Called when the game starts or when spawned
void APawnTurret::BeginPlay()
{
	Super::BeginPlay();

	GetWorld()->GetTimerManager().SetTimer(FireRateTimerHandle, this, &APawnTurret::CheckFireCondition, FireRate, true);

	PopulateEnemyList();
	AcquireTarget(FireRange);
}

void APawnTurret::HandleDestruction()
{
	Super::HandleDestruction();

	Destroy();
}

// Called every frame
void APawnTurret::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (CurrentTarget == nullptr || ReturnDistanceToEnemy(CurrentTarget) > FireRange)
	{
		AcquireTarget(FireRange);
	}
	if (CurrentTarget != nullptr)
	{
		RotateTurret(CurrentTarget->GetActorLocation());
	}
}
