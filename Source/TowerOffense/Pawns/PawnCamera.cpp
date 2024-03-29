// Created by Patryk Urbański 2021

#include "PawnCamera.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

// Sets default values
APawnCamera::APawnCamera()
{
    // Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    StaticMeshComp = CreateDefaultSubobject <UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponent"));
    CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));

    StaticMeshComp->SetupAttachment(RootComponent);
    SpringArmComp->SetupAttachment(StaticMeshComp);
    CameraComp->SetupAttachment(SpringArmComp, USpringArmComponent::SocketName);

    SpringArmComp->SetRelativeLocationAndRotation(FVector(0.f, 0.f, 50.f), FRotator(-60.f, 0.f, 0.f));
    SpringArmComp->TargetArmLength = 1000.f;

    ZoomFactor = SpringArmComp->TargetArmLength;

    AutoPossessPlayer = EAutoReceiveInput::Player0;
}

//Input functions
void APawnCamera::MoveForward(float AxisValue)
{
    MovementInput.X = FMath::Clamp<float>(AxisValue, -1.f, 1.f);
}

void APawnCamera::MoveRight(float AxisValue)
{
    MovementInput.Y = FMath::Clamp<float>(AxisValue, -1.f, 1.f);
}

void APawnCamera::ZoomIn()
{
    ZoomFactor -= 30.f;
    SpringArmComp->TargetArmLength = FMath::Clamp(ZoomFactor, 100.f, 2200.f);
    SpringArmComp->TargetArmLength = FMath::FInterpTo(SpringArmComp->TargetArmLength, ZoomFactor, GetWorld()->GetDeltaSeconds(), 1.f);
}

void APawnCamera::ZoomOut()
{
    ZoomFactor += 30.f;
    SpringArmComp->TargetArmLength = FMath::Clamp(ZoomFactor, 100.f, 2200.f);
    SpringArmComp->TargetArmLength = FMath::FInterpTo(SpringArmComp->TargetArmLength, ZoomFactor, GetWorld()->GetDeltaSeconds(), 1.f);
}

// Called when the game starts or when spawned
void APawnCamera::BeginPlay()
{
	Super::BeginPlay();	
}

// Called every frame
void APawnCamera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    if (!MovementInput.IsZero())
    {
        MovementInput = MovementInput.GetSafeNormal() * 500.0f;
        FVector NewLocation = GetActorLocation();
        NewLocation += GetActorForwardVector() * MovementInput.X * DeltaTime;
        NewLocation += GetActorRightVector() * MovementInput.Y * DeltaTime;
        SetActorLocation(NewLocation);
    }
}

// Called to bind functionality to input
void APawnCamera::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

    InputComponent->BindAxis("MoveForward", this, &APawnCamera::MoveForward);
    InputComponent->BindAxis("MoveRight", this, &APawnCamera::MoveRight);

    InputComponent->BindAction("ZoomIn",IE_Pressed, this, &APawnCamera::ZoomIn);
    InputComponent->BindAction("ZoomOut", IE_Pressed, this, &APawnCamera::ZoomOut);
}