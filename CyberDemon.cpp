#include "CyberDemon.h"
string CyberDemon::getSpecies() {
	return "Cyberdemon";
}

int CyberDemon::getDamage() {
	return Demons::getDamage();
}
CyberDemon::CyberDemon(int newStrength, int newhitpoints) : Demons(newStrength, newhitpoints) {}