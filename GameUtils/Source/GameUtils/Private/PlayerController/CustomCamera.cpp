// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerController/CustomCamera.h"

#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"


// Sets default values
ACustomCamera::ACustomCamera()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = Root;
	
	SpringArm = CreateDefaultSubobject<USpringArmComponent>("Spring Arm");
	SpringArm->SetupAttachment(Root);

	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");
	Camera->SetupAttachment(SpringArm);
}

// Called when the game starts or when spawned
void ACustomCamera::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACustomCamera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ACustomCamera::UpdateCamera(FVector2D Direction)
{
	// X should b Yaw, and Y should be pitch
	FQuat CurrentQuat = SpringArm->GetComponentQuat();
    
	FQuat DeltaYawQuat = FQuat(FVector::UpVector, FMath::DegreesToRadians(Direction.X));   
	FQuat DeltaPitchQuat = FQuat(FVector::RightVector, FMath::DegreesToRadians(Direction.Y));  
    
	FQuat NewQuat = DeltaYawQuat * CurrentQuat * DeltaPitchQuat;
    
	FRotator NewRotation = NewQuat.Rotator();
	NewRotation.Pitch = FMath::Clamp(NewRotation.Pitch, MinPitch, MaxPitch);
	NewRotation.Roll = 0.0f;
    
	SpringArm->SetWorldRotation(NewRotation);
}


