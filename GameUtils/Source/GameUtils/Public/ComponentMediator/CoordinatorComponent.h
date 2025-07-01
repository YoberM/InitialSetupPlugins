// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CoordinatorComponent.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class GAMEUTILS_API UCoordinatorComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UCoordinatorComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	FActorComponentTickFunction* ThisTickFunction) override;
	// Called every frame
	// Do something?
	template<class T>
	void GetComponentsByClass(AActor* Actor, TArray<TObjectPtr<T>>& OutArray);
};

template <class T>
void UCoordinatorComponent::GetComponentsByClass(AActor* Actor, TArray<TObjectPtr<T>>& OutArray)
{
	TArray<UActorComponent*> Found;
	Actor->GetComponents(T::StaticClass(), Found);
	for (UActorComponent* Comp : Found)
	{
		if (T* TypedComp = Cast<T>(Comp))
		{
			OutArray.Add(TypedComp);
		}
	}
}
