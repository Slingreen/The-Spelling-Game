// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Spells.h"
#include "CustomPlayerActions.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class THESPELLINGGAME_API UCustomPlayerActions : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCustomPlayerActions();

	UFUNCTION(BlueprintCallable, Category = "Movement")
		FVector Move_Right(float velocity, FVector Location, int Adjustment);

	UFUNCTION(BlueprintCallable, Category = "Movement")
		FVector Move_Up(float velocity, FVector Location, int Adjustment);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
		bool CanMove;

	UPROPERTY(EditAnywhere, Category = "Spell")
		TArray<ASpells*> Spells;

	UFUNCTION(BlueprintCallable, Category = "Spell")
		void Cast(FString text);

	UFUNCTION(BlueprintCallable, Category = "Spell")
		FString PreppedSpell();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Atribute")
		int Health;

	UFUNCTION(BlueprintCallable, Category = "Movement")
		FVector Tp();

	bool InCombat;
	bool Interrupted;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

private:
	int intendedspell;
	FVector RememberPrevLoc;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
