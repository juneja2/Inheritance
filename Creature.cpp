#include "Creature.h"
#include <iostream>
#include <cmath>
using namespace std;

Creature::Creature( int newStrength, int newHit) {
	strength = newStrength;
	hitpoints = newHit;
}
string Creature::getSpecies() {
	return "Creature";
}
void Creature::setStrength(int newStrength) {
	strength = abs(newStrength);
}
void Creature::setHitPoints(int newHitPoints) {
	hitpoints = abs(newHitPoints);
}
int Creature::getStrength()const {
	return strength;
}
int Creature::Creature::getHitPoints()const {
	return hitpoints;
}
int Creature::getDamage()
{
	int damage;
	// All creatures inflict damage, which is a
	// random number up to their strength
	damage = (rand() % strength) + 1;
	cout << getSpecies() << " attacks for " << damage << " points!" << endl;
	return damage;
}
