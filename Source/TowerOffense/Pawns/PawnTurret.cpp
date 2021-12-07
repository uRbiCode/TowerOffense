// Fill out your copyright notice in the Description page of Project Settings.
#include "PawnTurret.h"
#include "Kismet/GameplayStatics.h"
#include "PawnTank.h"

void APawnTurret::PopulateEnemyList()
{
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), APawnTank::StaticClass(), EnemyList);
}

// Called when the game starts or when spawned
void APawnTurret::BeginPlay()
{
	Super::BeginPlay();

	//create firing timer based on FireRate
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
