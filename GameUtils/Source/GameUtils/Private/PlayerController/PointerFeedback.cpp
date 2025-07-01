// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerController/PointerFeedback.h"

#include "NiagaraComponent.h"


#include "Components/DecalComponent.h"
#include "GameFramework/GameMode.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
APointerFeedback::APointerFeedback()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	DefaultRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultRootComponent"));
	RootComponent = DefaultRootComponent;

	FeedbackMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FeedbackMesh"));
	FeedbackMesh->SetupAttachment(RootComponent);

	FeedbackDecal = CreateDefaultSubobject<UDecalComponent>(TEXT("FeedbackDecal"));
	FeedbackDecal->SetupAttachment(RootComponent);

	FeedbackNiagara = CreateDefaultSubobject<UNiagaraComponent>(TEXT("FeedbackNiagara"));
	FeedbackNiagara->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void APointerFeedback::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APointerFeedback::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void APointerFeedback::UpdatePointer(FVector WorldLocation)
{
	SetActorLocation(WorldLocation);
}

void APointerFeedback::UpdatePointerMouseBased()
{
	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
	if (!PlayerController) return;

	float ScreenX, ScreenY;
	if (!PlayerController->GetMousePosition(ScreenX, ScreenY)) return;

	FVector WorldLocation;
	FVector WorldDirection;
	if (PlayerController->DeprojectScreenPositionToWorld(ScreenX, ScreenY, WorldLocation, WorldDirection))
	{

		// Plano en Z = 0, con normal hacia arriba
		FPlane GroundPlane = FPlane(FVector::ZeroVector, FVector::UpVector);

		// Calcular intersección del rayo con el plano
		FVector IntersectionPoint;
		if (FMath::SegmentPlaneIntersection(
			WorldLocation,
			WorldLocation + WorldDirection * 100000.f,
			GroundPlane,
			IntersectionPoint))
		{

			UE_LOG(LogTemp, Log, TEXT("Mouse hit Z=0 plane at: %s"), *IntersectionPoint.ToString());

			UpdatePointer(IntersectionPoint);
		}
	}
}

