#include "Fighter.h"



//Constructor / Deconstructor //

Fighter::Fighter(String& name, Weapon& weapon, Armour& armour) {

	maxHealth = 1;
	currentHealth = maxHealth;

	fighterName = name.GetData();
}

Fighter::~Fighter() {

	delete this;
	
}




// Functions //

void Fighter::Heal(int healClamp)
{

}

