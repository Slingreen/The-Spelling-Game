// Fill out your copyright notice in the Description page of Project Settings.


#include "Spell.h"

Spell::Spell()
{
}

Spell::~Spell()
{
}

bool Spell::IsSpellCast(FString Input)
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