// Created by Patryk Urbański 2021


#include "Kismet/GameplayStatics.h"
#include "OffenseStateBase.h"

AOffenseStateBase::AOffenseStateBase()
{
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), FName(TEXT("ReachedEndGame")), EndGameTankActors);
}