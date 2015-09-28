#ifndef GOBLIN_H
#define GOBLIN_H

#include "monster.h"

class Goblin: public Monster
{
public:
	Goblin();
	Unit* clone(Unit&);
	void attack(Unit&);
	void takeDamage(int);	
	
private:
	
}

#endif