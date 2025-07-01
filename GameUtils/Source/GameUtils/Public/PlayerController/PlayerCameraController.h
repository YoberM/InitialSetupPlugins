// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PlayerCameraController.generated.h"

class ACustomCamera;

/**
 * 
 */
UCLASS()
class GAMEUTILS_API APlayerCameraController : public APlayerController
{
	GENERATED_BODY()
public:
	APlayerCameraController();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	virtual void SetupCamera();
	UFUNCTION()
	virtual void SetupPawn();

	// Temporal Movements
	UFUNCTION(BlueprintCallable)
	virtual void AddDirectionalMovementInput(FVector2D Direction);
	UFUNCTION(BlueprintCallable)
	virtual void MoveCamera(FVector2D Direction);

	// Camera
protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<ACustomCamera> CameraToSpawn;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadWrite)
	ACustomCamera* CustomCamera { nullptr };
};
