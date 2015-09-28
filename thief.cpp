#include "thief.h"

Thief::Thief()
{
	Unit::setDamage(10);
	Unit::setHealth(60);
}

Unit* Thief::clone(Unit& aUnit)
{
	Unit* temp;
	temp = new Thief();
	Unit::setHealth(aUnit.getHealth());
	return temp;
}

void Thief::attack(Unit& aUnit)
{
	aUnit.takeDamage(Unit::getDamage());
}

void Thief::takeDamage(int pDamage)
{
	Unit::setHealth(Unit::getHealth()-pDamage);
}