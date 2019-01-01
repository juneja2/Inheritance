#ifndef DEMONS_H
#define DEMONS_H
#include "Creature.h"
#include <string>
#include <iostream>
using namespace std;

class Demons : public Creature {
	public:
		int getDamage();
		Demons(int newStrength = 10, int newhitpoints = 10);
		string getSpecies();
};

#endif