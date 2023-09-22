#include "VirtualPet.h"
#include "Pokemon.h"
#include "Digimon.h"
#include "Pikachu.h"
#include "Gatomon.h"

int main() {
	VirtualPet myLittleBoringPet("Basic Pet");
	myLittleBoringPet.feed();
	myLittleBoringPet.play();
	myLittleBoringPet.makeSound();

	cout << "Name: " << myLittleBoringPet.getName() << endl;
	cout << "Happiness: " << myLittleBoringPet.getHappiness() << endl;
	cout << "Hunger: " << myLittleBoringPet.getHunger() << endl;

	Pokemon pokemanz("Pokemanz", "Pokespeez");
	pokemanz.feed();
	pokemanz.play();
	pokemanz.makeSound();

	cout << "Name: " << pokemanz.getName() << endl;
	cout << "Happiness: " << pokemanz.getHappiness() << endl;
	cout << "Hunger: " << pokemanz.getHunger() << endl;
	cout << "Health: " << pokemanz.getHealth() << endl;
	cout << "Species: " << pokemanz.getSpecies() << endl;
	
	cout << " -----------------------------" << endl;
	
	Digimon digimon("Gatoman", "Fire");
	
	cout << "Name: " << digimon.getName() << endl;
	cout << "Happiness: " << digimon.getHappiness() << endl;
	cout << "Hunger: " << digimon.getHunger() << endl;
	digimon.useSpecialAttack();
	cout << "Element: " << digimon.getElement() << endl;


	Pikachu pikachu1("Raichu", "Electric", 100);
	
	cout << "Name: " << pikachu1.getName() << endl;
	cout << "Happiness: " << pikachu1.getHappiness() << endl;
	cout << "Hunger: " << pikachu1.getHunger() << endl;
	pikachu1.useElectricShock();
	return 0;
}
