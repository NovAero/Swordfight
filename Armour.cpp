#include "Armour.h"

Armour::Armour()
{
	name = "None";
	armorClass = 0;
}

Armour::Armour(const char* name, int ac)
{
	this->name = name;
	armorClass = ac;
}

Armour::~Armour()
{
	delete this;
}

// Function //

const int Armour::GetAC() const
{
	return armorClass;
}