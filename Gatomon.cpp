#include "Gatomon.h"

Gatomon::Gatomon(const string& inputName, const string& inputElement, const int& sharpness) : Digimon(inputName, inputElement)
{
	catClawSharpness = sharpness;
}

void Gatomon::useCatClawAttack()
{
	cout << getName() << " Attacks With a Sharpness of " << catClawSharpness << endl;
}

