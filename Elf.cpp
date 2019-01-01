#include "Elf.h"
#include <iostream>

string Elf::getSpecies() {
	return "Elf";
}
int Elf::getDamage() {
	int damage = Creature::getDamage();
	// Elves inflict double magical damage with a 10% chance
		if ((rand() % 10) == 0) {
			cout << "Magical attack inflicts " << damage <<
				" additional damage points!" << endl;
			damage = damage * 2;
	}
		return damage;
}
Elf::Elf(int newStrength, int newhitpoints): Creature(newStrength, newhitpoints) {}