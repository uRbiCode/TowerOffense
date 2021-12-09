// Fill out your copyright notice in the Description page of Project Settings.
#include "PawnBase.h"
#include "Components/BoxComponent.h"
#include "TowerOffense/Actors/ProjectileBase.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
APawnBase::APawnBase()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Collider"));
	RootComponent = BoxComp;

	BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Base Mesh"));
	BaseMesh->SetupAttachment(RootComponent);

	TracksMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Tracks Mesh"));
	TracksMesh->SetupAttachment(BaseMesh);

	WheelsMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Wheels Mesh"));
	WheelsMesh->SetupAttachment(BaseMesh);

	TurretMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Turret Mesh"));
	TurretMesh->SetupAttachment(BaseMesh);

	GunMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Gun Mesh"));
	GunMesh->SetupAttachment(TurretMesh);

	ProjectileSpawnPoint = CreateDefaultSubobject<USceneComponent>(TEXT("Projectile Spawn Point"));
	ProjectileSpawnPoint->SetupAttachment(GunMesh);
}

void APawnBase::PopulateEnemyList()
{
	UE_LOG(LogTemp, Fatal, TEXT("PopulateEnemyList must be overriden!"));
	exit(EXIT_FAILURE);
}

void APawnBase::AcquireTarget(const float& fire_range)
{
	for (AActor* enemy : EnemyList)
	{
		const float distance = ReturnDistanceToEnemy(enemy);
		if (distance <= fire_range)
		{
			CurrentTarget = enemy;
			break;
		}
	}
}

float APawnBase::ReturnDistanceToEnemy(AActor* enemy) const
{
	if (!IsValid(CurrentTarget))
	{
		return 0.f;
	}

	return FVector::Dist(enemy->GetActorLocation(), GetActorLocation());
}

void APawnBase::RotateTurret(FVector LookAtTarget)
{
	FVector LookAtTargetCleaned = FVector(LookAtTarget.X, LookAtTarget.Y, TurretMesh->GetComponentLocation().Z);
	FVector StartLocation = TurretMesh->GetComponentLocation();

	FRotator TurretRotation = FVector(LookAtTargetCleaned - StartLocation).Rotation();

	//offset caused by model initial rotation
	TurretRotation.Yaw -= 90.f;

	TurretMesh->SetWorldRotation(TurretRotation);
}

void APawnBase::CheckFireCondition()
{
	if (ReturnDistanceToEnemy(CurrentTarget) <= FireRange)
	{
		//prevent firing for no reason
		if (!IsValid(CurrentTarget))
		{
			return;
		}
			Fire();
	}
}

void APawnBase::Fire()
{
	if (ProjectileClass)
	{
		FVector SpawnLocation = ProjectileSpawnPoint->GetComponentLocation();
		FRotator SpawnRotation = ProjectileSpawnPoint->GetComponentRotation();

		//offset caused by model initial rotation
		SpawnRotation.Yaw += 90.f;

		AProjectileBase* TempProjectile = GetWorld()->SpawnActor<AProjectileBase>(ProjectileClass, SpawnLocation, SpawnRotation);
		TempProjectile->SetOwner(this);
	}
}

void APawnBase::HandleDestruction()
{
	Destroy();
}