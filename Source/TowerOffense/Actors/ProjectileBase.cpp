// Created by Patryk Urbañski 2021
#include "ProjectileBase.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "../GameInstance/OffenseGameInstance.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AProjectileBase::AProjectileBase()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;	

	ProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Projectile Mesh"));
	ProjectileMesh->OnComponentHit.AddDynamic(this, &AProjectileBase::OnHit);
	RootComponent = ProjectileMesh;

	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectile Movement"));

	InitialLifeSpan = 3.f;
}

void AProjectileBase::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	const AActor* MyOwner = GetOwner();
	if (!MyOwner)
	{
		return;
	}

	if (OtherActor && OtherActor != this && OtherActor != MyOwner && CalculateDamageChance())
	{
		UGameplayStatics::ApplyDamage(OtherActor, Damage, MyOwner->GetInstigatorController(), this, DamageType);
	}
	
	Destroy();
}

//uses Monte Carlo method to calculate if the projectile does damage when hits
bool AProjectileBase::CalculateDamageChance()
{
	struct Point { float x; float y; };
	int32 CirclePointsCounter = 0;
	int32 SquarePointsCounter = 1000;
	for (int32 i = 0; i < SquarePointsCounter; i++)
	{
		Point NewPoint;
		NewPoint.x = FMath::RandRange(-1.f, 1.f);
		NewPoint.y = FMath::RandRange(-1.f, 1.f);

		if (NewPoint.x * NewPoint.x + NewPoint.y * NewPoint.y <= 1.f)
		{
			CirclePointsCounter++;
		}
	}
	
	float tmp = 4.f * CirclePointsCounter / SquarePointsCounter;
	if (tmp > PI - .06f && tmp < PI + .06f) return true;
	else return false;
}

// Called when the game starts or when spawned
void AProjectileBase::BeginPlay()
{
	Super::BeginPlay();
}