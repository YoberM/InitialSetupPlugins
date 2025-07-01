// Fill out your copyright notice in the Description page of Project Settings.


#include "Scanner/ScannerComponent.h"

#include "Engine/OverlapResult.h"
#include "Scanner/ScannableInterface.h"


static int32 DebugScannerEnabled = 0;

static FAutoConsoleVariableRef CVarDebugScanner(
	TEXT("GameUtils.debug.Scanner"),
	DebugScannerEnabled,
	TEXT("Enable debug messages for Scanner\n0=off,1=on"),
	ECVF_Default
);

// Sets default values for this component's properties
UScannerComponent::UScannerComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UScannerComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UScannerComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                      FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UScannerComponent::TryScan()
{
	if (CanScan())
	{
		Scan();
	}
}

bool UScannerComponent::CanScan()
{
	return true;
}

void UScannerComponent::Scan()
{
	TArray<FOverlapResult> Overlaps;
	FCollisionShape Sphere = FCollisionShape::MakeSphere(ScanRadius);
	FVector Location = GetOwner()->GetActorLocation();

	bool bHasOverlap = GetWorld()->OverlapMultiByObjectType(
		Overlaps,
		Location,
		FQuat::Identity,
		FCollisionObjectQueryParams(ECollisionChannel::ECC_WorldDynamic),
		Sphere
	);

	if (bHasOverlap)
	{
		TArray<AActor*> OnAreaActors;
		for (const FOverlapResult& Result : Overlaps)
		{
			AActor* OverlappedActor = Result.GetActor();
			if (OverlappedActor && OverlappedActor->GetClass()->ImplementsInterface(UScannableInterface::StaticClass()))
			{
				OnAreaActors.Add(OverlappedActor);
			}
		}
		SetScannedActors(OnAreaActors);
	}
	
	if (DebugScannerEnabled)
	{
		DrawDebugSphere(GetWorld(), Location, ScanRadius, 32, FColor::Green, false, 2.f);
	}
}

void UScannerComponent::SetScannedActors(const TArray<AActor*>& NewDetectedActors)
{
	DetectedActors.Empty();
	for (AActor* Actor : NewDetectedActors)
	{
		if (IScannableInterface* Scannable = Cast<IScannableInterface>(Actor))
		{
			Scannable->OnScanned();
			DetectedActors.Add(Actor);
			if (DebugScannerEnabled)
			{
				DrawDebugSphere(GetWorld(), Actor->GetActorLocation(), 100.0f, 32, FColor::White, false, 2.f);
			}
		}
	}
}

TArray<TObjectPtr<AActor>> UScannerComponent::GetScannedActors()
{
	return DetectedActors;
}

TArray<AActor*> UScannerComponent::GetScannedActorsBP()
{
	TArray<AActor*> RawActors;
	for (const TObjectPtr<AActor>& Ptr : DetectedActors)
	{
		RawActors.Add(Ptr.Get());
	}
	return RawActors;
}
