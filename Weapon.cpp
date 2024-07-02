#include "Weapon.h"

// Constructors / Deconstructors

Weapon::Weapon(const String& wpnName,int weaponType)
{
	weaponName = wpnName; 

	switch (weaponType)
	{
	case 0: //Dagger || Low base dmg, very high crit, very large multiplier

		dmgRange[0] = 1;
		dmgRange[1] = 5;
		critChance = 33;
		critMultiplier = 3.5f;
		break;

	case 1: //Shortsword || Average base dmg, higher crit, normal crit multipler

		dmgRange[0] = 3;
		dmgRange[1] = 6;
		critChance = 20;
		critMultiplier = 2.5f;
		break;

	case 2: //Longsword || Higher base dmg, lower crit and multiplier

		dmgRange[0] = 6;
		dmgRange[1] = 12;
		critChance = 10;
		critMultiplier = 1.5f;
		break;

	case 3: //Axe || Medium base dmg, higher crit chance, regular multiplier

		dmgRange[0] = 4;
		dmgRange[1] = 8;
		critChance = 10;
		critMultiplier = 2.0f;
		break;

	case 4: //Mace || very high base dmg, super low crit and multiplier

		dmgRange[0] = 8;
		dmgRange[1] = 16;
		critChance = 5;
		critMultiplier = 1.25f;
		break;

	default: //Default if case num isnt remembered when spawning weapon

		dmgRange[0] = 2;
		dmgRange[1] = 6;
		critChance = 20;
		critMultiplier = 2.0f;
		break;
	}

}

Weapon::~Weapon()
{		
	delete this;
}

// Functions //

int* Weapon::GetDmgRange(Weapon& weapon)
{
	return dmgRange;
}
int Weapon::GetCritChance(Weapon& weapon)
{
	return critChance;
}

int Weapon::GetCritXplier(Weapon& weapon)
{
	return critMultiplier;
}


