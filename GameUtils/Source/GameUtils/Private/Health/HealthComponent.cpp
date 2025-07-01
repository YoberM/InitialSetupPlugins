﻿// Fill out your copyright notice in the Description page of Project Settings.


// Sets default values for this component's properties

#include "Health/HealthComponent.h"

UHealthComponent::UHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UHealthComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                     FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UHealthComponent::OnFatalDamage()
{
	OnDeath.Broadcast();
}

void UHealthComponent::ReceiveDamage(float DamageAmount)
{
	if (DamageAmount <= 0.0f || IsDead())
		return;
	CurrentHealth = FMath::Clamp(CurrentHealth - DamageAmount, 0.0f, MaxHealth);
	if (IsDead())
	{
		OnFatalDamage();
	}
}

void UHealthComponent::Heal(float HealAmount)
{
	if (HealAmount <= 0.0f || IsDead())
		return;

	CurrentHealth = FMath::Clamp(CurrentHealth + HealAmount, 0.0f, MaxHealth);
	
}

