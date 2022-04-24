#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class SPELLINGGAME_API Spell
{
public:
	Spell();
	~Spell();


	UPROPERTY(EditAnywhere, Category = "information")
	FString Name;

	int NameLength() {
		int i = 0;
		while (i < Name.Len()) {
			i++;
		}
		return i;
	}

	UPROPERTY(EditAnywhere, Category = "information")
	int damage;
	
	UPROPERTY(EditAnywhere, Category = "Image")
	class USpriteComponent* Anim;

	bool IsSpellCast(FString Input);
};
