//---------------------------------------------------------------------------

#ifndef PlateArmorH
#define PlateArmorH

#include "Armor.h"

class PlateArmor : public Armor{
public:
	PlateArmor(int aiDefence, int aiWeight,std::string asName);

	int getWeight();

};

//---------------------------------------------------------------------------
#endif
