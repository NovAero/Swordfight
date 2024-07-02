#include "Armour.h"

Armour::Armour()
{
	name = "None";
	armorClass = 0;
}

Armour::Armour(String& name, int ac)
{
	this->name = name;
	armorClass = ac;
}

Armour::~Armour()
{
	
	delete this;

}

// Function //

const int Armour::GetAC()
{
	return armorClass;
}
