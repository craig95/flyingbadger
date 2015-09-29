#include "piercingfactory.h"
#include "thief.h"
#include "goblin.h"

Unit* PiercingFactory::createPlayer()
{
	Thief* temp = new Thief();
	return temp;
}

Unit* PiercinggFactory::createMob()
{
	Goblin* temp = new Goblin();
	return temp;
}