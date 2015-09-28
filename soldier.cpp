#include "soldier.h"

Soldier::Soldier()
{
	Unit::setDamage(8);
	Unit::setHealth(100);
}

Unit* Soldier::clone(Unit& aUnit)
{
	Unit* temp;
	temp = new Soldier();
	Unit::setHealth(aUnit.getHealth());
	return temp;
}

void Soldier::attack(Unit& aUnit)
{
	aUnit.takeDamage(Unit::getDamage());
}

void Soldier::takeDamage(int pDamage)
{
	Unit::setHealth(Unit::getHealth()-pDamage);
}