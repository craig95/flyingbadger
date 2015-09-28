/**
 * @file   unit.h
 * @Author Craig van Heerden U15029779
 * @date   September, 2015
 * @brief  Pure virtual class that defines a unit
 *
 */

#ifndef UNIT_H
#define UNIT_H

class Unit
{
public:
	Unit();
	virtual ~Unit();
	int getHealth();
	int getDamage();
	virtual void attack(Unit&)=0;
	virtual void takeDamage(int pDamage)=0;
	virtual Unit* clone(Unit&)=0;

protected:
	void setHealth(int pHealth);
	void setDamage(int pDamage);

private:
	int damage;
	int health;
	
};

#endif