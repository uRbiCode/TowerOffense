// Created by Patryk Urbañski 2021


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
	}
	else if (APawnTurret* DestroyedTurret = Cast<APawnTurret>(DeadActor))
	{
		DestroyedTurret->HandleDestruction();
		UpdateTargetTurretCount();
	}

	CheckEndGameConditions();
}

void AOffenseGameModeBase::CheckEndGameConditions()
{
	//no turret is alive
	if (GetCurrentTurretsCount() == 0)
	{
		HandleGameOver();
	}
	//no tank is alive
	 if (GetCurrentTanksCount() == 0)
	{
		HandleGameOver();
	}

	//every living tank has reached EndGame
	else if (GetCurrentEndGameTanksCount() == GetCurrentTanksCount() || GetCurrentEndGameTanksCount() == GetInitialTanksCount())
	{
		UpdatePlayerPawnsCount();
		HandleGameOver();
	}
}

void AOffenseGameModeBase::UpdateEndGameTanks(APawnTank* Tank)
{
	GetGameState<AOffenseStateBase>()->EndGameTankActors.Add(Tank);
	Tank->HandleDestruction();
	CheckEndGameConditions();
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
