// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomPlayer.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ACustomPlayer::ACustomPlayer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACustomPlayer::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ACustomPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (Health <= 0) {
		Death();
	}
}

FVector ACustomPlayer::Move_Right(float velocity, FVector Location, int Adjustment)
{
	FVector newLocation;
	newLocation = Location;
	if (CanMove) {
		newLocation.X += velocity * Adjustment;
	}
	RememberPrevLoc = newLocation;
	return newLocation;
}

FVector ACustomPlayer::Move_Up(float velocity, FVector Location, int Adjustment)
{
	FVector newLocation;
	newLocation = Location;
	if (CanMove) {
		newLocation.Z += velocity * Adjustment;
	}
	RememberPrevLoc = newLocation;
	return newLocation;
}

void ACustomPlayer::SpellCast(FString text)
{
	/*FVector SpawnLoc{ 900.f, -3950.0f, -60.0f };
	UWorld* World = GetWorld();
	if (Name[intendedspell] == text) {
		if (intendedspell == 0) {
			ASpells* PC_Spell = World->SpawnActor<ASpells>(Spells0, SpawnLoc, { 0,0,0 });
		}
		else if (intendedspell == 1) {
			ASpells* PC_Spell = World->SpawnActor<ASpells>(Spells1, SpawnLoc, { 0,0,0 });
		}
		else if (intendedspell == 2) {
			ASpells* PC_Spell = World->SpawnActor<ASpells>(Spells2, SpawnLoc, { 0,0,0 });
		}
		else if (intendedspell == 3) {
			ASpells* PC_Spell = World->SpawnActor<ASpells>(Spells3, SpawnLoc, { 0,0,0 });
		}
		else if (intendedspell == 4) {
			ASpells* PC_Spell = World->SpawnActor<ASpells>(Spells4, SpawnLoc, { 0,0,0 });
		}
		else if (intendedspell == 5) {
			ASpells* PC_Spell = World->SpawnActor<ASpells>(Spells5, SpawnLoc, { 0,0,0 });
		}
		ASpells* PC_Spell = World->SpawnActor<ASpells>(S, SpawnLoc, { 0,0,0 });
		return;
	}*/
}

FString ACustomPlayer::PreppedSpell()
{
	//intendedspell = FMath::RandRange(0, 5);
	//FString temp = "";
	/*
	if (InCombat) {
		int max = SpellsLenght;
		intendedspell = FMath::RandRange(0, max);
		FString temp = Cast<ASpells>(Spells[intendedspell])->Name;
		return temp;
	}*/
	return "";
}

FVector ACustomPlayer::newTpLoc()
{
	FVector Loc;
	if (InCombat) {
		Loc = { -770.0f, -3951.0f, -60.0f };
	}
	else {
		Loc = RememberPrevLoc;
	}
	return Loc;
}

void ACustomPlayer::EnterCombat(AActor* OtherActor)
{
	if (!(OtherActor->IsA(ASpells::StaticClass()))) {
		InCombat = true;
		CanMove = false;
		Tp();
		CombatEntered();
	}
	else {

		Health -= Cast<ASpells>(OtherActor)->damage;

	}
}

void ACustomPlayer::Death()
{
	exit(0);
}

