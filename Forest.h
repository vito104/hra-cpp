//---------------------------------------------------------------------------

#ifndef ForestH
#define ForestH

#include "Location.h"

class Forest : public Location{
private:
	Item* mItem;
	Enemy* mEnemy;
public:

    Forest(Enemy* aEnemy, Item* aItem);

    void visit(Hero* aHero);
};
//---------------------------------------------------------------------------
#endif
