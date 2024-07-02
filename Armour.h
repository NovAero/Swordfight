#pragma once
#include "String.h"

class Armour
{
public:

	Armour();
	Armour(String& name, int ac);

	~Armour();

public:

	const int GetAC();

private:
	
	String name;
	int armorClass;

};

