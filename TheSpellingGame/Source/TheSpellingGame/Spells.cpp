// Fill out your copyright notice in the Description page of Project Settings.


#include "Spells.h"

// Sets default values
ASpells::ASpells()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

bool ASpells::IsSpellCast(FString Spell)
{
	for (int i = 0; i < Name.Len(); i++) {
		if (Spell[i] != Name[i]) {
			return false;
		}
	}
	return true;
}

// Called when the game starts or when spawned
void ASpells::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASpells::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (DeltaTime >= Lifetime) {
		this->Destroy();
	}

}

