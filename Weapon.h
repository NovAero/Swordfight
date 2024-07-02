#pragma once
#include "String.h"

class Weapon
{
public: //Constructors / Deconstructors

	Weapon(const String& wpnName, int weaponType); //Needs a name and type, affects dmg and crit

	~Weapon();

public:

	int* GetDmgRange(Weapon& weapon);

	int GetCritChance(Weapon& weapon);
	int GetCritXplier(Weapon& weapon);

private:

	String weaponName; //Display name for console

	int dmgRange[2];

	int critChance; //Chance to deal a critical hit
	float critMultiplier; //Multiplier for crit, intentional float to int conversion for truncation
};

