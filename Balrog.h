#ifndef BALROG_H
#define BALROG_H
#include "Demons.h"
class Balrog: public Demons {
public:
	int getDamage();
	Balrog(int newStrength = 10, int newhitpoints= 10);
	string getSpecies();
};
#endif