//---------------------------------------------------------------------------

#ifndef MageH
#define MageH

#include "Hero.h"

class Mage : public Hero{
private:
	int miMana;
public:
	Mage(int aiDefence, int aiMana);

	void Attack(Enemy* aEnemy);

	void setArmor(Armor* aArmor);
};

//---------------------------------------------------------------------------
#endif
