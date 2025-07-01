// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ScannerComponent.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class GAMEUTILS_API UScannerComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UScannerComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Scanner")
	float ScanRadius = 1000.f;
public:
	UFUNCTION(BlueprintCallable, Category="Scanner")
	virtual void TryScan();
	UFUNCTION(BlueprintCallable, Category="Scanner")
	virtual bool CanScan();
	UFUNCTION(BlueprintCallable, Category="Scanner")
	virtual void Scan();

public:
	UFUNCTION(BlueprintCallable, Category="Scanner")
	void SetScannedActors(const TArray<AActor*>& DetectedActors);

protected:
	TArray<TObjectPtr<AActor>> GetScannedActors();
	UFUNCTION(BlueprintCallable, Category="Scanner")
	TArray<AActor*> GetScannedActorsBP();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Scanner")
	TArray<TObjectPtr<AActor>> DetectedActors;
};
