#include "Weapon.h"

// Constructors / Deconstructors

Weapon::Weapon()
{
	weaponName = "Empty";
	weaponType = -1;
	minDmg = 0;
	maxDmg = 0;

	critChance = 0; 
	critMultiplier = 0.0f;
}

Weapon::Weapon(char* wpnName,int weaponType)
{
	SetData(wpnName, weaponType);
}

Weapon::Weapon(Weapon& copy)
{
	SetData(copy, copy.weaponType);
}

Weapon::~Weapon()
{		
	delete this;
}





// Functions //

Weapon& Weapon::SetData(const char* name, int wpnType)
{
	weaponName.SetData(name);

	switch (wpnType)
	{
	case 0: //Dagger || Low base dmg, very high crit, very large multiplier

		minDmg = 1;
		maxDmg = 5;
		critChance = 33;
		critMultiplier = 3.5f;
		return *this;
		break;

	case 1: //Shortsword || Average base dmg, higher crit, normal crit multipler

		minDmg = 3;
		maxDmg = 6;
		critChance = 20;
		critMultiplier = 2.5f;
		return *this;
		break;

	case 2: //Longsword || Higher base dmg, lower crit and multiplier

		minDmg = 6;
		maxDmg = 12;
		critChance = 10;
		critMultiplier = 1.5f;
		return *this;
		break;

	case 3: //Axe || Medium base dmg, higher crit chance, regular multiplier

		minDmg = 4;
		maxDmg = 8;
		critChance = 10;
		critMultiplier = 2.0f;
		return *this;
		break;

	case 4: //Mace || very high base dmg, super low crit and multiplier

		minDmg = 8;
		maxDmg = 16;
		critChance = 5;
		critMultiplier = 1.25f;
		return *this;
		break;

	default: //Default if case num isnt remembered when spawning weapon

		minDmg = 2;
		maxDmg = 6;
		critChance = 20;
		critMultiplier = 2.0f;
		return *this;
		break;
	}
}

Weapon& Weapon::SetData(Weapon& copy, int wpnType)
{
	weaponName = copy.GetName();

	weaponType = wpnType;

	switch (weaponType)
	{
	case 0: //Dagger || Low base dmg, very high crit, very large multiplier

		minDmg = 1;
		maxDmg = 5;
		critChance = 33;
		critMultiplier = 3.5f;
		return *this;
		break;

	case 1: //Shortsword || Average base dmg, higher crit, normal crit multipler

		minDmg = 3;
		maxDmg = 6;
		critChance = 20;
		critMultiplier = 2.5f;
		return *this;
		break;

	case 2: //Longsword || Higher base dmg, lower crit and multiplier

		minDmg = 6;
		maxDmg = 12;
		critChance = 10;
		critMultiplier = 1.5f;
		return *this;
		break;

	case 3: //Axe || Medium base dmg, higher crit chance, regular multiplier

		minDmg = 4;
		maxDmg = 8;
		critChance = 10;
		critMultiplier = 2.0f;
		return *this;
		break;

	case 4: //Mace || very high base dmg, super low crit and multiplier

		minDmg = 8;
		maxDmg = 16;
		critChance = 5;
		critMultiplier = 1.25f;
		return *this;
		break;

	default: //Default if case num isnt remembered when spawning weapon

		minDmg = 2;
		maxDmg = 6;
		critChance = 20;
		critMultiplier = 2.0f;
		return *this;
		break;
	}
}

String& Weapon::GetName()
{
	return weaponName;
}

int Weapon::GetMinDmg() const
{
	return minDmg;
}

int Weapon::GetMaxDmg() const
{
	return maxDmg;
}


int Weapon::GetCritChance() const
{
	return critChance;
}

float Weapon::GetCritXplier() const
{
	return critMultiplier;
}