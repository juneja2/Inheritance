#ifndef CYBERDEMON_H
#define CYBERDEMON_H
#include "Demons.h"
class CyberDemon : public Demons {
public:
	int getDamage();
	CyberDemon(int newStrength = 10, int newhitpoints = 10);
	string getSpecies();
};
#endif