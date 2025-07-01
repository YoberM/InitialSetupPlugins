// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CustomCamera.generated.h"

class USpringArmComponent;
class UCameraComponent;

UCLASS()
class GAMEUTILS_API ACustomCamera : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ACustomCamera();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
public:
	UFUNCTION(BlueprintCallable)
	virtual USpringArmComponent* GetSpringArmComponent() const { return SpringArm; };
	UFUNCTION(BlueprintCallable)
	virtual UCameraComponent* GetCamera() const { return Camera; };;
protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	USceneComponent* Root;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	USpringArmComponent* SpringArm;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UCameraComponent* Camera;

	// Camera rotation
public:
	UFUNCTION(BlueprintCallable)
	virtual void UpdateCamera(FVector2D Direction);
protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float MaxPitch { 85.0f };

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float MinPitch { -85.0f };
};
