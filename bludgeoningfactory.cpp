#include "bludgeoningfactory.h"
#include "soldier.h"
#include "ogre.h"

Unit* BludgeoningFactory::createPlayer()
{
	Soldier* temp = new Soldier();
	return temp;
}

Unit* BludgeoningFactory::createMob()
{
	Ogre* temp = new Ogre();
	return temp;
}