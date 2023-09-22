#ifndef GATOMON_H
#define GATOMON_H
#include "Digimon.h"

class Gatomon : public Digimon
{
private:
	int catClawSharpness;
public:
	Gatomon(const string& inputName, const string& inputElement, const int& sharpness);
	void useCatClawAttack();

};
#endif
