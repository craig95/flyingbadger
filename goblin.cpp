#include "goblin.h"

Goblin::Goblin()
{
	Unit::setDamage(12);
	Unit::setHealth(50);
}

Unit* Goblin::clone(Unit& aUnit)
{
	Unit* temp;
	temp = new Goblin();
	Unit::setHealth(aUnit.getHealth());
	return temp;
}

void Goblin::attack(Unit& aUnit)
{
	aUnit.takeDamage(Unit::getDamage());
}

void Goblin::takeDamage(int pDamage)
{
	Unit::setHealth(Unit::getHealth()-pDamage);
}