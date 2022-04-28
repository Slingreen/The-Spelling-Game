// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomPlayerActions.h"

// Sets default values for this component's properties
UCustomPlayerActions::UCustomPlayerActions()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

FVector UCustomPlayerActions::Move_Right(float velocity, FVector Location, int Adjustment)
{
	FVector newLocation;
	newLocation = Location;
	if (CanMove) {
		newLocation.X += velocity * Adjustment;
	}
	RememberPrevLoc = newLocation;
	return newLocation;
}

FVector UCustomPlayerActions::Move_Up(float velocity, FVector Location, int Adjustment)
{
	FVector newLocation;
	newLocation = Location;
	if (CanMove) {
		newLocation.Z += velocity * Adjustment;
	}
	RememberPrevLoc = newLocation;
	return newLocation;
}

FVector UCustomPlayerActions::Tp()
{
	FVector Loc;
	if(InCombat) {
		Loc = { -550.0f, -1449.f, -70.0f };
	}
	else {
		Loc = RememberPrevLoc;
	}
	return Loc;
}

// Called when the game starts
void UCustomPlayerActions::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


void UCustomPlayerActions::Cast(FString text)
{

}

FString UCustomPlayerActions::PreppedSpell() 
{
	int max = Spells.Max();
	intendedspell = FMath::RandRange(0, max);
	FString temp = Spells[intendedspell]->Name;
	return temp;
}

// Called every frame
void UCustomPlayerActions::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

