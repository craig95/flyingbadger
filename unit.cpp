#include "unit.h"

Unit::Unit()
{
}

Unit::~Unit()
{
}

void Unit::setHealth(int pHealth)
{
	health = pHealth;
}

void Unit::setDamage(int pDamage)
{
	damage = pDamage;
}

int Unit::getHealth()
{
	return health;
}

int Unit::getDamage()
{
	return damage;
}