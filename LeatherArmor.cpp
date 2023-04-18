//---------------------------------------------------------------------------

#pragma hdrstop

#include "LeatherArmor.h"

LeatherArmor::LeatherArmor(int aiDefence, int aiWeight, std::string asName):Armor(aiDefence,aiWeight,asName){

}

int LeatherArmor::getWeight(){
	return 0;
}
//---------------------------------------------------------------------------
#pragma package(smart_init)
