#ifndef MAGICFACTORY_H
#defineMAGICFACTORY_H

#include "unitfactory.h"

class MagicFactory: public UnitFactory
{
public:
	Unit* createPlayer();
	Unit* createMob();
	
}

#endif