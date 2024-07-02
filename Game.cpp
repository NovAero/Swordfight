#pragma once
#include "Fighter.h"

int main() {

	Weapon weapon;

	weapon.SetData("ShortSword", 4);

	String weaponName = weapon.GetName();
	int weaponDmg[2] = { weapon.GetMinDmg(), weapon.GetMaxDmg() };

	std::cout << weaponDmg[0] << std::endl;
	std::cout << weaponDmg[1];
}
