#include "Balrog.h"

string Balrog::getSpecies() {
	return "Balrog";
}
int Balrog::getDamage() {
	int damage = Demons::getDamage();
	// Balrogs are so fast they get to attack twice
		int damage2 = (rand() % Demons::getStrength()) + 1;
		cout << "Balrog speed attack inflicts " << damage2 <<
			" additional damage points!" << endl;
		damage = damage + damage2;
	return damage;
}
Balrog::Balrog(int newStrength, int newhitpoints): Demons(newStrength, newhitpoints) {}
