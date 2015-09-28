#ifndef PLAYER_H
#define PLAYER_H

#include "unit.h"

class Player: public Unit
{
public:
	virtual Unit* clone(Unit&)=0;
	virtual void attack(Unit&)=0;
	virtual void takeDamage(int pDamage)=0;
}

#endif