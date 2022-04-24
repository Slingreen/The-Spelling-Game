// Fill out your copyright notice in the Description page of Project Settings.


#include "Spell_Actor.h"

// Sets default values
ASpell_Actor::ASpell_Actor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASpell_Actor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASpell_Actor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool ASpell_Actor::IsSpellCast(FString Input)
{
	int l = this->NameLength();
	bool b = true;

	for (int i = 0; i < l; i++) {
		if (Input[i] != Name[i]) {
			b = false;
		}
	}
	return b;
}