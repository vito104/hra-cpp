//---------------------------------------------------------------------------

#pragma hdrstop

#include "Armor.h"

Armor::Armor(int aiDefence, int aiWeight, std::string asName):Item(aiWeight){
	miDefence= aiDefence;
	msName= asName;
}

int Armor::getDefence(){
    return miDefence;
}

void Armor::printName(){
    std::cout << msName;
}
//---------------------------------------------------------------------------
#pragma package(smart_init)
