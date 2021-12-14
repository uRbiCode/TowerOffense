// Created by Patryk Urbański 2021

#include "OffenseStateBase.h"
#include "Kismet/GameplayStatics.h"
#include "TowerOffense/Pawns/PawnTank.h"
#include "TowerOffense/Pawns/PawnTurret.h"

AOffenseStateBase::AOffenseStateBase()
{
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), FName(TEXT("ReachedEndGame")), EndGameTankActors);
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), APawnTank::StaticClass(), TankActors);
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), APawnTurret::StaticClass(), TurretActors);
	
	InitialTanksCount = TankActors.Num();
	InitialTurretsCount = TurretActors.Num();
}