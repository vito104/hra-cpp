//---------------------------------------------------------------------------

#ifndef PaladinH
#define PaladinH

#include "Hero.h"

class Paladin : public Hero{
private:
	int miRage;
public:
	Paladin(int aiDefence, int aiRage);

	void Attack(Enemy* aEnemy);

    void setArmor(Armor* aArmor);

};
//---------------------------------------------------------------------------
#endif
