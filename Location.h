//---------------------------------------------------------------------------

#ifndef LocationH
#define LocationH

#include "Hero.h"

class Location{
public:
	virtual void visit(Hero* aHero) = 0;
};
//---------------------------------------------------------------------------
#endif
