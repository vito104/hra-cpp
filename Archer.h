//---------------------------------------------------------------------------

#ifndef ArcherH
#define ArcherH

#include "Hero.h"

class Archer : public Hero{
private:
	int miAgility;
public:
    Archer(int aiDefence, int aiAgility);

	void Attack(Enemy* aEnemy);

    void setArmor(Armor* aArmor);

};
//---------------------------------------------------------------------------
#endif
