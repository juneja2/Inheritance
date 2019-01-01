#ifndef ELF_H
#define ELF_H
#include "Creature.h"
class Elf: public Creature{
public:
	int getDamage();
	Elf(int newStrength = 10, int newhitpoints = 10);
	string getSpecies();
};
#endif
