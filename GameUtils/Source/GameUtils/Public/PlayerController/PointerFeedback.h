// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PointerFeedback.generated.h"

class UDecalComponent;
class UNiagaraComponent;


UCLASS()
class GAMEUTILS_API APointerFeedback : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	APointerFeedback();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UFUNCTION(BlueprintCallable)
	virtual void UpdatePointer(FVector WorldLocation);

	// Basic Functions
	UFUNCTION(BlueprintCallable)
	virtual void UpdatePointerMouseBased();

	UPROPERTY(EditAnywhere)
	USceneComponent* DefaultRootComponent;

	UPROPERTY(EditAnywhere, Category = "Hit Feedback")
	UStaticMeshComponent* FeedbackMesh;

	UPROPERTY(EditAnywhere, Category = "Hit Feedback")
	UDecalComponent* FeedbackDecal;

	UPROPERTY(EditAnywhere, Category = "Hit Feedback")
	UNiagaraComponent* FeedbackNiagara;
};
