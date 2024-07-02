#include "Fighter.h"



//Constructor / Deconstructor //

Fighter::Fighter() {

	fighterName = "Empty";
	maxHealth == 0;
	currentHealth = 0;
	healAmount - 0;
	baseAtk = 0;
	baseDef - 0;
}

Fighter::Fighter(char* name, Weapon& weapon, Armour& armour) {

	maxHealth = 30;
	currentHealth = maxHealth;

	SetName(name);
	
	this->weapon = weapon;
	this->armour = armour;
	

}

Fighter::~Fighter() {

	delete &fighterName;
	delete &weapon;
	delete &armour;
	
}

// Functions //

void Fighter::Attack(Fighter& target)
{
	isDefending = false;

	if (target.isDefending == true) {
		system("CLS");
		std::cout << "The enemy's shield blocks your attack\n";
		return;
	}


}

void Fighter::Defend()
{

}

void Fighter::Heal()
{

}

void Fighter::TakeDamage(int dmg)
{
}

String& Fighter::SetName(const char* name)
{
	fighterName.SetData(name);
	return fighterName;
}
