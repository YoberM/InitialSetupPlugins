// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Projectile.generated.h"

class UProjectileMovementComponent;
class USphereComponent;

UCLASS()
class GAMEUTILS_API AProjectile : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:
	UFUNCTION()
	virtual void OnCollisionBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);
protected:
	UPROPERTY(EditAnywhere, Category="Projectile")
	TObjectPtr<USceneComponent> DefaultRootComponent;
	UPROPERTY(EditAnywhere, Category="Projectile")
	TObjectPtr<USphereComponent> CollisionComponent;
	UPROPERTY(EditAnywhere, Category="Projectile")
	TObjectPtr<UStaticMeshComponent> VisualMeshComponent;
	UPROPERTY(EditAnywhere, Category="Projectile")
	TObjectPtr<UProjectileMovementComponent> ProjectileMovementComponent;
};
