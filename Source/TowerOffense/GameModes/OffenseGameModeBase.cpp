// Fill out your copyright notice in the Description page of Project Settings.


#include "OffenseGameModeBase.h"
#include "TowerOffense/Pawns/PawnTank.h"
#include "TowerOffense/Pawns/PawnTurret.h"
#include "TowerOffense/GameStates/OffenseStateBase.h"
#include "Kismet/GameplayStatics.h"


AOffenseGameModeBase::AOffenseGameModeBase()
{
	GameStateClass = AOffenseStateBase::StaticClass();
}


void AOffenseGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	HandleGameStart();
}

void AOffenseGameModeBase::HandleGameStart()
{
	InitialTargetTurrets = UpdateTargetTurretCount();
	InitialPlayerPawns = UpdatePlayerPawnsCount();
}

void AOffenseGameModeBase::ActorDied(AActor* DeadActor)
{
	if (APawnTank* DestroyedTank = Cast<APawnTank>(DeadActor))
	{
		DestroyedTank->HandleDestruction();
		UE_LOG(LogTemp, Warning, TEXT("Destroyed player tank. %d/%d remain"), UpdatePlayerPawnsCount(), InitialPlayerPawns);
	}
	else if (APawnTurret* DestroyedTurret = Cast<APawnTurret>(DeadActor))
	{
		DestroyedTurret->HandleDestruction();
		UE_LOG(LogTemp, Warning, TEXT("Destroyed turret tank. %d/%d remain"), UpdateTargetTurretCount(), InitialTargetTurrets);
	}
}

void AOffenseGameModeBase::CheckEndGameConditions(int32 TanksCount)
{
	if (InitialPlayerPawns == TanksCount)
	{
		UE_LOG(LogTemp, Warning, TEXT("All player tanks died"));
	}
}

void AOffenseGameModeBase::HandleGameOver(bool PlayerWon)
{
	//
}

int32 AOffenseGameModeBase::UpdateTargetTurretCount()
{
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), APawnTurret::StaticClass(), TurretActors);
	return TurretActors.Num();;
}

int32 AOffenseGameModeBase::UpdatePlayerPawnsCount()
{
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), APawnTank::StaticClass(), TankActors);
	return TankActors.Num();
}

void AOffenseGameModeBase::UpdateEndGameTanks(APawnTank* Tank)
{
	GetGameState<AOffenseStateBase>()->EndGameTankActors.Add(Tank);
	UE_LOG(LogTemp, Warning, TEXT("%d tanks reached endgame"), GetGameState<AOffenseStateBase>()->EndGameTankActors.Num());
}
