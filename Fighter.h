#pragma once
#include "String.h"
#include "Weapon.h"
#include "Armour.h"

class Fighter
{
	Fighter();
	Fighter(char* name, Weapon& weapon, Armour& armour);

	~Fighter();

public:
	
	void Attack(Fighter& target);
	void Defend();	
	void Heal();

	void TakeDamage(int dmg);

	String& SetName(const char* name);

public:


private:

	String fighterName;
	Weapon weapon;
	Armour armour;

	int maxHealth;
	int currentHealth;

	int healAmount;

	bool isDefending;
	
	int baseAtk;
	int baseDef;

};