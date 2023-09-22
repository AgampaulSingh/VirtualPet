#ifndef PIKACHU_H
#define PIKACHU_H
#include "Pokemon.h"

class Pikachu : public Pokemon
{
private:
	int electricPower;

public:
	Pikachu(const string& inputName, const string& inputSpecies, const int& inputEPower);
       void useElectricShock();	

		
};

#endif
