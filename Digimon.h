#ifndef DIGIMON_H
#define DIGIMON_H

#include "VirtualPet.h"

using namespace std;
class Digimon : public VirtualPet {
	
	private:
		string element;
	
	public:
		Digimon(const string& digimonName, const string& elementType);
		void useSpecialAttack();
		string getElement() const;		
};

#endif
