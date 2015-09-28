#ifndef GOBLIN_H
#define GOBLIN_H

#include "monster.h"

class Goblin: public Monster
{
public:
	Unit* Clone(Unit& aUnit);
	void attack(Unit& aUnit);
	void takeDamage(int pDamage);
	
private:
	
}

#endif