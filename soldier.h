#ifndef SOLDIER_H
#define SOLDIER_H

#include "player.h"

class Soldier: public Player
{
public:
	Soldier();
	Unit* clone(Unit&);
	void attack(Unit&);
	void takeDamage(int);	
	
}

#endif