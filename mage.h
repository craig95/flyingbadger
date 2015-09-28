#ifndef MAGE_H
#define MAGE_H

#include "player.h"

class Mage: public Player
{
public:
	Mage();
	Unit* clone(Unit&);
	void attack(Unit&);
	void takeDamage(int pDamage);	
}

#endif