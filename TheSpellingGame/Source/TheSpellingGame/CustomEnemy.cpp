// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomEnemy.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ACustomEnemy::ACustomEnemy()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACustomEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACustomEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (DeltaTime >= Casttimer + CastTime) {
		SpellCast();
		Casttimer = DeltaTime;
	}
}

void ACustomEnemy::SpellCast()
{
	FVector SpawnLoc{ -770.0f, -3951.0f, -60.0f };
	UWorld* World = GetWorld();
	ASpells* PC_Spell = World->SpawnActor<ASpells>(Spell, SpawnLoc, { 0,0,0 });
}

FVector ACustomEnemy::newTpLoc()
{
	return CombatLoc;
}

void ACustomEnemy::EnterCombat(AActor* OtherActor)
{
	if (!(OtherActor->IsA(ASpells::StaticClass()))) {
		InCombat = true;
		Tp();
	}
	else {
		Health -= Cast<ASpells>(OtherActor)->damage;
	}
}

void ACustomEnemy::Death()
{
	this->Destroy();
}
