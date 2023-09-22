#include "Pikachu.h"

Pikachu::Pikachu(const string& inputName, const string& inputSpecies, const int& inputEPower) : Pokemon(inputName, inputSpecies)
{
	electricPower = inputEPower;
}


void Pikachu::useElectricShock()
{
	cout << getName() << " Releases an electirc bolt of " << electricPower << " Voltage" << endl;
}

