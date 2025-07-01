// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "HealthComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDeath);

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class GAMEUTILS_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UHealthComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;

protected:
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	float MaxHealth { 100.0f };

	UPROPERTY(EditAnywhere, Category = "Health")
	float CurrentHealth { 100.0f};
public:
	FOnDeath OnDeath;

	UFUNCTION(BlueprintCallable, Category = "Health")
	virtual void OnFatalDamage();

	
	UFUNCTION(BlueprintCallable, Category = "Health")
	virtual void ReceiveDamage(float DamageAmount);

	UFUNCTION(BlueprintCallable, Category = "Health")
	virtual void Heal(float HealAmount);

	UFUNCTION(BlueprintCallable, Category = "Health")
	virtual float GetCurrentHealth() const { return CurrentHealth; }

	UFUNCTION(BlueprintCallable, Category = "Health")
	virtual float GetMaxHealth() const { return MaxHealth; }

	UFUNCTION(BlueprintCallable, Category = "Health")
	virtual bool IsDead() const { return CurrentHealth <= 0.0f; }
};
