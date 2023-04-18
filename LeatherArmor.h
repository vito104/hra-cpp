//---------------------------------------------------------------------------

#ifndef LeatherArmorH
#define LeatherArmorH

#include "Armor.h"

class LeatherArmor : public Armor{
public:
	LeatherArmor(int aiDefence, int aiWeight, std::string asName);

    int getWeight();

};

//---------------------------------------------------------------------------
#endif
