#ifndef PIERCINGFACTORY_H
#define PIERCINGFACTORY_H

#include "unitfactory.h"

class PiercingFactory: public UnitFactory
{
public:
	void createPlayer();
	void createMob();
}

#endif