// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Spell_Actor.generated.h"

UCLASS()
class SPELLINGGAME_API ASpell_Actor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpell_Actor();


	UPROPERTY(EditAnywhere, Category = "information")
	FString Name;

	UPROPERTY(EditAnywhere, Category = "information")
	int damage;

	UPROPERTY(EditAnywhere, Category = "Image")
	class USpriteComponent* Anim;

	int NameLength() {
		int i = 0;
		while (i < Name.Len()) {
			i++;
		}
		return i;
	}

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	bool IsSpellCast(FString Input);
};
