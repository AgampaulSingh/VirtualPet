#include "Pikachu.h"

Pikachu::Pikachu(const string& inputName, const string& inputSpecies, const int& inputEPower) : Pokemon(inputName, inputSpecies)
{
	electricPower = inputEPower;
}
void Pikachu::useElectricShock()
{
	cout << getName() << "Uses Electric shock Attack with a power of " << electricPower << endl;
}

