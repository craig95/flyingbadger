#ifndef BLUDGEONINGFACTORY_H
#define BLUDGEONINGFACTORY_H

#include "unitfactory.h"

class BludgeoningFactory: public UnitFactory
{
public:
	void createPlayer();
	void createMob();
}

#endif