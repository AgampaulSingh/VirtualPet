#include "Digimon.h"
#include <string>
#include <iostream>
Digimon::Digimon(const string& digimonName, const string& elementType) : VirtualPet(digimonName)
{
	element = elementType;
}

void Digimon::useSpecialAttack() 
{
	cout << getName() << "Uses his special attack" << endl;
}

string Digimon::getElement() const
{
	return element;
}
