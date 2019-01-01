#include "Creature.h"
#include "Human.h"
#include "CyberDemon.h"
#include "Balrog.h"
#include "Elf.h"
#include <iostream>
#include <ctime>
using namespace std;

int main() {
	srand((unsigned)time(0));
	Human h(10, 10);
	int damage = h.getDamage();
	cout << "Total damage = " << damage << endl;
	cout << endl;

	Elf e(7, 10);
	damage = e.getDamage();
	cout << "Total Damage = " << damage << endl;// returns an int


	Creature c;
	cout << "Creature Strength = " << c.getStrength()<< endl;
	damage = c.getDamage();
	cout << "Total damage = " << damage << endl;

	CyberDemon Cyber(6, 2);
	damage = Cyber.getDamage();
	cout << "Total Damage = " << damage  << endl;
	Balrog b(2, 3);
	damage = b.getDamage();
	cout << "Total Damage = " << damage << endl;
}
// Output
/*
Human attacks for 6 points!
Total damage = 6

Elf attacks for 4 points!
Total Damage = 4
Creature Strength = 10
Creature attacks for 10 points!
Total damage = 10
Cyberdemon attacks for 6 points!
Total Damage = 6
Balrog attacks for 2 points!
Balrog speed attack inflicts 2 additional damage points!
Total Damage = 4
Press any key to continue . . .
*/
