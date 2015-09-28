#ifndef ELEMENTAL_H
#define ELEMENTAL_H

#include "monster.h"

class Elemental: public Monster
{
public:
	Elemental();
	Unit* clone(Unit&);
	void attack(Unit&);
	void takeDamage(int);	
}

#endif