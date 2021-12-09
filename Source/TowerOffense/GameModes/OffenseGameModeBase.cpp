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

void AOffenseGameModeBase::ActorDied(AActor* DeadActor)
{
	if (APawnTank* DestroyedTank = Cast<APawnTank>(DeadActor))
	{
		DestroyedTank->HandleDestruction();
		UpdatePlayerPawnsCount();
		UE_LOG(LogTemp, Warning, TEXT("Destroyed player tank. %d/%d remain"), GetCurrentTanksCount(), GetInitialTanksCount());
	}
	else if (APawnTurret* DestroyedTurret = Cast<APawnTurret>(DeadActor))
	{
		DestroyedTurret->HandleDestruction();
		UpdateTargetTurretCount();
		UE_LOG(LogTemp, Warning, TEXT("Destroyed turret tank. %d/%d remain"), GetCurrentTurretsCount(), GetInitialTurretsCount());
	}

	CheckEndGameConditions();
}

void AOffenseGameModeBase::CheckEndGameConditions()
{
	//no turret is alive
	if (GetCurrentTurretsCount() == 0)
	{
		UE_LOG(LogTemp, Error, TEXT("GAME OVER: Every turret has been destroyed"));
	}
	//no tank is alive
	 if (GetCurrentTanksCount() == 0)
	{
		UE_LOG(LogTemp, Error, TEXT("GAME OVER: Every tank has been destroyed"));
	}

	//every living tank has reached EndGame
	else if (GetCurrentEndGameTanksCount() == GetCurrentTanksCount() || GetCurrentEndGameTanksCount() == GetInitialTanksCount())
	{
		UE_LOG(LogTemp, Error, TEXT("GAME OVER: Every living tank has reached EndGame"));
	}
}

void AOffenseGameModeBase::HandleGameOver()
{
	//TODO: implement
}

void AOffenseGameModeBase::UpdateEndGameTanks(APawnTank* Tank)
{
	GetGameState<AOffenseStateBase>()->EndGameTankActors.Add(Tank);
	CheckEndGameConditions();
	UE_LOG(LogTemp, Warning, TEXT("%d out of %d tanks reached endgame"), GetCurrentEndGameTanksCount(), GetCurrentTanksCount());
}

void AOffenseGameModeBase::UpdateTargetTurretCount()
{
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), APawnTurret::StaticClass(), GetGameState<AOffenseStateBase>()->TurretActors);
}

void AOffenseGameModeBase::UpdatePlayerPawnsCount()
{
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), APawnTank::StaticClass(), GetGameState<AOffenseStateBase>()->TankActors);
}

int32 AOffenseGameModeBase::GetInitialTanksCount()
{
	return GetGameState<AOffenseStateBase>()->InitialTanksCount;
}

int32 AOffenseGameModeBase::GetInitialTurretsCount()
{
	return GetGameState<AOffenseStateBase>()->InitialTurretsCount;
}

int32 AOffenseGameModeBase::GetCurrentTanksCount()
{
	return GetGameState<AOffenseStateBase>()->TankActors.Num();
}

int32 AOffenseGameModeBase::GetCurrentTurretsCount()
{
	return GetGameState<AOffenseStateBase>()->TurretActors.Num();
}

int32 AOffenseGameModeBase::GetCurrentEndGameTanksCount()
{
	return GetGameState<AOffenseStateBase>()->EndGameTankActors.Num();
}
