// Created by Patryk Urbański 2021

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PawnCamera.generated.h"

UCLASS()
class TOWEROFFENSE_API APawnCamera : public APawn
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	class USpringArmComponent* SpringArmComp;
	UPROPERTY(EditAnywhere)
	class UCameraComponent* CameraComp;
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* StaticMeshComp;

	//Input
	FVector2D MovementInput;
	FVector2D CameraInput;
	float ZoomFactor;

	void MoveForward(float AxisValue);
	void MoveRight(float AxisValue);
	void ZoomIn();
	void ZoomOut();

public:	
	// Sets default values for this pawn's properties
	APawnCamera();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
