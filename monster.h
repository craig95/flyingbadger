#ifndef MONSTER_H
#define MONSTER_H

#include "unit.h"

class Monster: public Unit
{
public:
	virtual Unit* clone(Unit&)=0;
	virtual void attack(Unit&)=0;
	virtual void takeDamage(int pDamage)=0;
}

#endif