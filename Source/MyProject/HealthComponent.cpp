// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthComponent.h"
#include "MyInterface.h"


// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


// Called when the game starts
void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UHealthComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UHealthComponent::LoseHealth(float amount)
{
	Health -= amount;
	if (GetOwner()->Implements<UMyInterface>()) {
		IMyInterface::Execute_OnTakeDamage(GetOwner());
		if (Health <= 0.f) {
			IMyInterface::Execute_OnDeath(GetOwner());
		}
	}
}

