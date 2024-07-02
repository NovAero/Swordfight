#pragma once
#include "String.h"

class Armour
{
public:

	Armour();
	Armour(const char* name, int ac);

	~Armour();

public:

	const int GetAC() const;

private:
	
	String name;
	int armorClass; //How much dmg the armor removes during calculations

};