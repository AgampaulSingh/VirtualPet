#include "VirtualPet.h"
#include "Pokemon.h"
#include "Digimon.h"
#include "Pikachu.h"
#include "Gatomon.h"

int main()
{
	Digimon Agumon("Agumon", "Fire");
	Pokemon Squirtle("Squirtle", "Water");
	Gatomon BlackGatomon("Black Gatomon", "Vaccine", 100);
	Pikachu Raichu("Raichu", "Electric", 100);

	Agumon.feed();
	Agumon.play();
	Agumon.useSpecialAttack();

	cout << "Name: " << Agumon.getName() << endl;
	cout << "Element: " << Agumon.getElement() << endl;
        cout << "Happiness: " << Agumon.getHappiness() << endl;
        cout << "Hunger: " << Agumon.getHunger() << endl;

	cout << "----------------------" << endl << endl;

	Squirtle.feed();
	Squirtle.play();
	

	cout << "Name: " << Squirtle.getName() << endl;
        cout << "Happiness: " << Squirtle.getHappiness() << endl;
        cout << "Hunger: " << Squirtle.getHunger() << endl;
	cout << "Health: " << Squirtle.getHealth() << endl;
	Squirtle.makeSound();

	cout << "----------------------" << endl << endl;

	BlackGatomon.feed();
	BlackGatomon.play();

	BlackGatomon.useCatClawAttack();
	BlackGatomon.useSpecialAttack();

	cout << "Name: " << BlackGatomon.getName() << endl;
	cout << "Element: " << BlackGatomon.getElement() << endl;
        cout << "Happiness: " << BlackGatomon.getHappiness() << endl;
        cout << "Hunger: " << BlackGatomon.getHunger() << endl;
	
	
	cout << "----------------------" << endl << endl;

	Raichu.feed();
	Raichu.play();
	Raichu.useElectricShock();

	cout << "Name: " << Raichu.getName() << endl;
        cout << "Happiness: " << Raichu.getHappiness() << endl;
        cout << "Hunger: " << Raichu.getHunger() << endl;
	cout << "Health: " << Raichu.getHealth() << endl;
	cout << "Electric Power: " << Raichu.getElectricPower() << endl;
	Raichu.makeSound();


	return 0;
}
