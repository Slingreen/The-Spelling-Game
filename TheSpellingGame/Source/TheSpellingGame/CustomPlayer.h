// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Spells.h"
#include "CustomPlayer.generated.h"

UCLASS()
class THESPELLINGGAME_API ACustomPlayer : public APawn
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACustomPlayer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "Movement")
		FVector Move_Right(float velocity, FVector Location, int Adjustment);

	UFUNCTION(BlueprintCallable, Category = "Movement")
		FVector Move_Up(float velocity, FVector Location, int Adjustment);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
		bool CanMove;

	UPROPERTY(EditAnywhere, Category = "Spell")
		TSubclassOf<ASpells> Spells0;

	UPROPERTY(EditAnywhere, Category = "Spell")
		TSubclassOf<ASpells> Spells1;

	UPROPERTY(EditAnywhere, Category = "Spell")
		TSubclassOf<ASpells> Spells2;

	UPROPERTY(EditAnywhere, Category = "Spell")
		TSubclassOf<ASpells> Spells3;

	UPROPERTY(EditAnywhere, Category = "Spell")
		TSubclassOf<ASpells> Spells4;

	UPROPERTY(EditAnywhere, Category = "Spell")
		TSubclassOf<ASpells> Spells5;

	UFUNCTION(BlueprintCallable, Category = "Spell")
		void SpellCast(FString text);

	UPROPERTY(EditAnywhere, Category = "Spell")
		TArray<FString> Name;

	UFUNCTION(BlueprintCallable, Category = "Spell")
		FString PreppedSpell();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Atribute")
		int Health;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Movement")
		void Tp();

	UFUNCTION(BlueprintCallable, Category = "Movement")
		FVector newTpLoc();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD")
		void CombatEntered();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HUD")
		void CombatEnded();

	UFUNCTION(BlueprintCallable, Category = "CollisionBehaviour")
		void EnterCombat(AActor* OtherActor);

	bool InCombat;
	//bool Interrupted;

private:
	int intendedspell;
	FVector RememberPrevLoc;
	bool Interrupted = false;
	//TSubclassOf<ASpells> S;

	FString SpellName;
	int Spelldamage;
	int SpellLife;

	void Death();
};
