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
	if (DeadActor == PlayerTank)
	{
		PlayerTank->HandleDestruction();
		HandleGameOver(false);
	}
	else if (APawnTurret* DestroyedTurret = Cast<APawnTurret>(DeadActor))
	{
		DestroyedTurret->HandleDestruction();

		if (--TargetTurrets == 0)
		{
			HandleGameOver(true);
		}
	}
}

void AOffenseGameModeBase::HandleGameStart()
{
	TargetTurrets = GetTargetTurretCount();
	PlayerTank = Cast<APawnTank>(UGameplayStatics::GetPlayerPawn(this, 0));

	GameStart();
}

void AOffenseGameModeBase::HandleGameOver(bool PlayerWon)
{
	GameOver(PlayerWon);
}

int32 AOffenseGameModeBase::GetTargetTurretCount()
{
	TArray<AActor*> TurretActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), APawnTurret::StaticClass(), TurretActors);
	return TurretActors.Num();;
}
