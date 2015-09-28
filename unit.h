/**
 * @file   example_action.h
 * @Author Me (me@example.com)
 * @date   September, 2008
 * @brief  Brief description of file.
 *
 * Detailed description of file.
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
	virtual void attack()=0;


protected:
	void setHealth(int pHealth);
	void setDamage(int pDamage);

private:
	int damage;
	int health;
	
};

#endif