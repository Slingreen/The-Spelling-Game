// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Spells.h"
#include "CustomPlayerActions.h"
#include "EnemyBehaviour.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class THESPELLINGGAME_API UEnemyBehaviour : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UEnemyBehaviour();

	UFUNCTION(BlueprintCallable, Category = "CollisionBehaviour")
		void EnterCombat(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
			UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweeb,
			const FHitResult& SweepResult);

	UPROPERTY(EditAnywhere, Category = "Scene");
		FName Combatworld = FName("Combat");
	UPROPERTY(EditAnywhere, Category = "Scene");
		FName overworld = FName("UI_Level_1");

	UPROPERTY(EditAnywhere, Category = "Attributes");
		int Health;

	UPROPERTY(EditAnywhere, Category = "Attributes");
		int CastTime;

	UPROPERTY(EditAnywhere, Category = "Spell");
		TArray<ASpells*> Spells;

	UFUNCTION(BlueprintCallable, Category = "Spell")
		void Cast();

	UFUNCTION(BlueprintCallable, Category = "Movement")
		FVector Tp();

	UPROPERTY(EditAnywhere, Category = "PlayerRef")
		UCustomPlayerActions* Player;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

private:
	bool InCombat = false;
	int spellindex;
	float Casttimer = 4.f;

	FVector CombatLoc{ -550.0f, -1449.f, -70.0f };

	void Death();

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
