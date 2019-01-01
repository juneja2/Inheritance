#ifndef HUMAN_H
#define HUMAN_H
#include "Creature.h"
class Human : public Creature {
	public:
		Human(int newStrength = 10, int newhitpoints = 10);
		int getDamage();
		string getSpecies();
};

#endif