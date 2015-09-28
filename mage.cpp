#include "mage.h"

Mage::Mage()
{
	Unit::setDamage(5);
	Unit::setHealth(80);
}

Unit* Mage::clone(Unit& aUnit)
{
	Unit* temp;
	temp = new Mage();
	Unit::setHealth(aUnit.getHealth());
	return temp;
}

void Mage::attack(Unit& aUnit)
{
	aUnit.takeDamage(Unit::getDamage());
}

void Mage::takeDamage(int pDamage)
{
	Unit::setHealth(Unit::getHealth()-pDamage);
}