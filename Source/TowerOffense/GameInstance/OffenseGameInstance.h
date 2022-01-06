// Created by Patryk Urbański 2021

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "OffenseGameInstance.generated.h"


UCLASS()
class TOWEROFFENSE_API UOffenseGameInstance : public UGameInstance
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Move", meta = (AllowPrivateAccess = "true"))
		float ProjectileMovementSpeed;

protected:
	virtual void Init() override;
};
