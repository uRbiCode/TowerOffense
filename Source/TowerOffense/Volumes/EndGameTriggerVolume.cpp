// Created by Patryk Urbański 2021


#include "EndGameTriggerVolume.h"
#include "Kismet/GameplayStatics.h"
#include "TowerOffense/GameModes/OffenseGameModeBase.h"
#include "TowerOffense/Pawns/PawnTank.h"

AEndGameTriggerVolume::AEndGameTriggerVolume()
{	
	OnActorBeginOverlap.AddDynamic(this, &AEndGameTriggerVolume::OnOverlapBegin);
}

void AEndGameTriggerVolume::OnOverlapBegin(AActor* OverlappedActor, AActor* OverlappingActor)
{	
	if (APawnTank* Tank = Cast<APawnTank>(OverlappingActor))
	{
		Tank->Tags.Add(FName(TEXT("ReachedEndGame")));
		GameMode->UpdateEndGameTanks(Tank);
	}
}

void AEndGameTriggerVolume::BeginPlay()
{
	GameMode = GetWorld()->GetAuthGameMode<AOffenseGameModeBase>();
}
