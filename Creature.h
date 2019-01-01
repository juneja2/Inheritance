#ifndef CREATURE_H
#define CREATURE_H
#include <string>
using namespace std;
class Creature {
private:
	int strength;   // How much damage we can inflict
	int hitpoints;  // How much damage we can sustain
public:
	Creature(int newStrength = 10, int newHit = 10);
	void setStrength(int newStrength);
	void setHitPoints(int newHitPoints);

	int getStrength()const;
	int getHitPoints()const;
	
	virtual string getSpecies(); // Returns type of species
	int getDamage();

};
#endif