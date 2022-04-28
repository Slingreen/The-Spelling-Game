// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyBehaviour.h"
#include "Kismet/GameplayStatics.h"

// Sets default values for this component's properties
UEnemyBehaviour::UEnemyBehaviour()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UEnemyBehaviour::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

void UEnemyBehaviour::EnterCombat(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweeb,
	const FHitResult& SweepResult)
{
	if (OtherActor->IsA(UCustomPlayerActions::StaticClass())) {
		InCombat = true;
		Player->InCombat = true;
		Player->CanMove = false;
		Player->Tp();
		this->Tp();
	}
}

void UEnemyBehaviour::Cast() 
{
	FVector SpawnLoc{ -740.f, -1449.f, -80.f };
	int max = Spells.Max();
	spellindex = FMath::RandRange(0, max);
	Player->Health -= Spells[spellindex]->damage;
	//GetWorld()->SpawnActor<ASpells>(Spells[spellindex], SpawnLoc, { 0,0,0 });
}

FVector UEnemyBehaviour::Tp()
{
	return CombatLoc;
}

void UEnemyBehaviour::Death()
{
	Player->InCombat = false;
	Player->CanMove = true;
	Player->Tp();
}


// Called every frame
void UEnemyBehaviour::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (DeltaTime >= Casttimer + CastTime) {
		Cast();
		Casttimer = DeltaTime;
	}
}

