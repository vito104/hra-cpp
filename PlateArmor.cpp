//---------------------------------------------------------------------------

#pragma hdrstop

#include "PlateArmor.h"

PlateArmor::PlateArmor(int aiDefence, int aiWeight,std::string asName):Armor(aiDefence,aiWeight,asName){

}

int PlateArmor::getWeight(){
    return miWeight;
}
//---------------------------------------------------------------------------
#pragma package(smart_init)
