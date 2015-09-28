#ifndef OGRE_H
#define OGRE_H

#include "monster.h"

class Ogre: public Monster
{
public:
	Ogre();
	Unit* clone(Unit&);
	void attack(Unit&);
	void takeDamage(int);	
	
}

#endif