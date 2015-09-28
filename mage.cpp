#include "mage.h"

Mage::Mage()
{
	damage = 5
	health = 80;
}

Unit* Mage::clone()
{
	Unit* temp;
	temp = new Mage();
}

void Mage::attack(Unit&)
{
	
}

void Mage::takeDamage(int pDamage)
{
	
}