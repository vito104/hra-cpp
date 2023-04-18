//---------------------------------------------------------------------------

#pragma hdrstop

#include "Paladin.h"

Paladin::Paladin(int aiDefence, int aiRage):Hero(aiDefence){
	miRage= aiRage;
}

void Paladin::Attack(Enemy* aEnemy){
    std::cout << "Paladin utoci" << std::endl;
	if(aEnemy->getStrenght() > (miDefence+miRage)){
		miHealth-= aEnemy->getStrenght()-(miDefence+miRage);
        std::cout << "Nepritel ti ubral zivot. " << std::endl;
	}else{
		std::cout << "Porazil jsi nepritele. " << std::endl;
        aEnemy->setStrenght(0);
	}
}

void Paladin::setArmor(Armor* aArmor){

		if(mArmor!=nullptr){
			delete(mArmor);
		}
		mArmor=aArmor;
        std::cout << "Beru i platove brneni!" << std::endl;
		//TODO dame do inventare na pozadavek
		//idealne vyhazovat vyjimky throw exception...
}

//---------------------------------------------------------------------------
#pragma package(smart_init)
