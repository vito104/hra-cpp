//---------------------------------------------------------------------------

#ifndef HeroH
#define HeroH

#include "Armor.h"
#include "Enemy.h"

#include <iostream>

class Hero{
protected:
	static const int SI_ARRAY_SIZE = 10;
    int miMaxCapacity;
	int miHealth;
	int miDefence;
	Armor* mArmor;
	Item* miInventory[SI_ARRAY_SIZE];
    int miLevel;
public:
	Hero(int aiDefence);

	void printInfo();

	virtual void Attack(Enemy* aEnemy) = 0;

	virtual void setArmor(Armor* aArmor) = 0;

	void printInventory();

	void insertIntoInventory(Item* aItem);

	int getHealth();

    ~Hero();
};


//---------------------------------------------------------------------------
#endif
