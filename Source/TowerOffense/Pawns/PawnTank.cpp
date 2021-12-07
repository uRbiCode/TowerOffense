// Fill out your copyright notice in the Description page of Project Settings.
#include "PawnTank.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

FVector APawnTank::CalculateMovement(float Value)
{
	return FVector(Value * GetWorld()->DeltaTimeSeconds , 0, 0);
}

//void APawnTank::CalculateRotateInput(float Value)
//{
//	float RotateAmount = Value * RotateSpeed * GetWorld()->DeltaTimeSeconds;
//	FRotator Rotation = FRotator(0, RotateAmount, 0);
//	RotationDirection = FQuat(Rotation);
//}

void APawnTank::Move()
{
	AddActorLocalOffset(CalculateMovement(MoveSpeed), true);
}

//void APawnTank::Rotate()
//{
//	AddActorLocalRotation(RotationDirection, true);
//}

// Called when the game starts or when spawned
void APawnTank::BeginPlay()
{
	Super::BeginPlay();
}

void APawnTank::HandleDestruction()
{
	Super::HandleDestruction();
}

// Called every frame
void APawnTank::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//Rotate();
	Move();
	UE_LOG(LogTemp, Warning, TEXT("X:%f Y:%f Z:%f"), GetActorLocation().X, GetActorLocation().Y, GetActorLocation().Z);
}
