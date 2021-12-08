// Fill out your copyright notice in the Description page of Project Settings.


#include "OffenseGameModeBase.h"
#include "TowerOffense/Pawns/PawnTank.h"
#include "TowerOffense/Pawns/PawnTurret.h"
#include "Kismet/GameplayStatics.h"

void AOffenseGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	HandleGameStart();
}

void AOffenseGameModeBase::ActorDied(AActor* DeadActor)
{
	if (APawnTank* DestroyedTank = Cast<APawnTank>(DeadActor))
	{
		DestroyedTank->HandleDestruction();
		UE_LOG(LogTemp, Warning, TEXT("Destroyed player tank. %d/%d remain"), GetPlayerPawnsCount(), InitialPlayerPawns);
	}
	else if (APawnTurret* DestroyedTurret = Cast<APawnTurret>(DeadActor))
	{
		DestroyedTurret->HandleDestruction();
		UE_LOG(LogTemp, Warning, TEXT("Destroyed turret tank. %d/%d remain"), GetTargetTurretCount(), InitialTargetTurrets);
	}
}

void AOffenseGameModeBase::HandleGameStart()
{
	InitialTargetTurrets = GetTargetTurretCount();
	InitialPlayerPawns = GetPlayerPawnsCount();
}

void AOffenseGameModeBase::HandleGameOver(bool PlayerWon)
{
	;
}

int32 AOffenseGameModeBase::GetTargetTurretCount()
{
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), APawnTurret::StaticClass(), TurretActors);
	return TurretActors.Num();;
}

int32 AOffenseGameModeBase::GetPlayerPawnsCount()
{
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), APawnTank::StaticClass(), TankActors);
	return TankActors.Num();
}
