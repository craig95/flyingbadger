#include "elemental.h"

Elemental::Elemental()
{
	Unit::setDamage(4);
	Unit::setHealth(85);
}

Unit* Elemental::clone(Unit& aUnit)
{
	Unit* temp;
	temp = new Elemental();
	Unit::setHealth(aUnit.getHealth());
	return temp;
}

void Elemental::attack(Unit& aUnit)
{
	aUnit.takeDamage(Unit::getDamage());
}

void Elemental::takeDamage(int pDamage)
{
	Unit::setHealth(Unit::getHealth()-pDamage);
}