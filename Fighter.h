#pragma once
#include "String.h"
#include "Weapon.h"
#include "Armour.h"

class Fighter
{


	Fighter(String& name, Weapon& weapon, Armour& armor);

	~Fighter();


public:
	
	void Attack(Fighter& target, Weapon& weapon);

	void Defend(Armour&, int baseDefence);	

	void HealSelf(int healClamp, int multiplier);
	


private:

	String fighterName;
	char state;
	
	int maxHealth;
	int currentHealth;

	int baseAtk;
	int baseDf;

};

