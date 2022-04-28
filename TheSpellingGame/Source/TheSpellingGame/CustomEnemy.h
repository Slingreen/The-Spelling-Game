// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Spells.h"
#include "CustomEnemy.generated.h"

UCLASS()
class THESPELLINGGAME_API ACustomEnemy : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACustomEnemy();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = "Attributes");
	int Health;

	UPROPERTY(EditAnywhere, Category = "Attributes");
	int CastTime;

	UPROPERTY(EditAnywhere, Category = "Spell");
		TSubclassOf<ASpells> Spell;

	UFUNCTION(BlueprintCallable, Category = "Spell")
		void SpellCast();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Movement")
		void Tp();

	UFUNCTION(BlueprintCallable, Category = "Movement")
		FVector newTpLoc();

	UFUNCTION(BlueprintCallable, Category = "CollisionBehaviour")
		void EnterCombat(AActor* OtherActor);

private:
	bool InCombat = false;
	float Casttimer = 4.f;

	FVector CombatLoc{ 900.f, -3950.0f, -60.0f };

	void Death();
};
