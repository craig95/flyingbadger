#include "magicfactory.h"
#include "mage.h"
#include "elemental.h"

Unit* MagicFactory::createPlayer()
{
	Mage* temp = new Mage();
	return temp;
}

Unit* MagicFactory::createMob()
{
	Elemental* temp = new Elemental();
	return temp;
}