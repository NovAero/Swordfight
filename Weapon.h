#pragma once
#include "String.h"

class Weapon
{
public: //Constructors / Deconstructors

	Weapon();
	Weapon(char* wpnName, int weaponType); //Needs a name and type, affects dmg and crit
	
	Weapon(Weapon& copy);

	~Weapon();

public:

	Weapon& SetData(const char* name, int wpnType);
	Weapon& SetData(Weapon& copy, int wpnType);

	String& GetName();
	
	int GetMinDmg() const;
	int GetMaxDmg() const;

	int GetCritChance() const;
	float GetCritXplier() const;



private:

	String weaponName; //Display name for console
	int weaponType;

	int minDmg;
	int maxDmg;

	int critChance; //Chance to deal a critical hit
	float critMultiplier; //Multiplier for crit, intentional float to int conversion for truncation

};