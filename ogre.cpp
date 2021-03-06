#include "ogre.h"

Ogre::Ogre()
{
	Unit::setDamage(5);
	Unit::setHealth(120);
}

Unit* Ogre::clone(Unit& aUnit)
{
	Unit* temp;
	temp = new Ogre();
	Unit::setHealth(aUnit.getHealth());
	return temp;
}

void Ogre::attack(Unit& aUnit)
{
	aUnit.takeDamage(Unit::getDamage());
}

void Ogre::takeDamage(int pDamage)
{
	Unit::setHealth(Unit::getHealth()-pDamage);
}