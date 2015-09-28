#ifndef THIEF_H
#define THIEF_H

#include "player.h"

class Thief: public Player
{
public:
	Thief();
	Unit* clone(Unit&);
	void attack(Unit&);
	void takeDamage(int);	
}

#endif