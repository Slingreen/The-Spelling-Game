// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Spells.generated.h"

UCLASS()
class THESPELLINGGAME_API ASpells : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpells();

	UPROPERTY(EditAnywhere, Category = "Properties")
	FString Name;

	int NameLenght() {
		return Name.Len();
	}

	UPROPERTY(EditAnywhere, Category = "Properties")
		int damage;
	UPROPERTY(EditAnywhere, Category = "Properties")
		int Lifetime;

	bool IsSpellCast(FString Spell);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
