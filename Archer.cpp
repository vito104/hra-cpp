//---------------------------------------------------------------------------

#pragma hdrstop

#include "Archer.h"

Archer::Archer(int aiDefence, int aiAgility):Hero(aiDefence){
	miAgility= aiAgility;
}

void Archer::Attack(Enemy* aEnemy){
    std::cout << "Lucisnik utoci" << std::endl;
	if(aEnemy->getStrenght() > (miDefence+miAgility)){
		miHealth-= aEnemy->getStrenght()-(miDefence+miAgility);
        std::cout << "Nepritel ti ubral zivot. " << std::endl;
	}else{
		std::cout << "Porazil jsi nepritele. " << std::endl;
        aEnemy->setStrenght(0);
	}
}

void Archer::setArmor(Armor* aArmor){
	if(aArmor->getWeight()==0){
		if(mArmor!=nullptr){
			delete(mArmor);
		}
		mArmor=aArmor;
	}else{
		//TODO dame do inventare
		//idealne vyhazovat vyjimky throw exception...
		std::cout << "Je to na tebe tezke!" << std::endl;
	}
}
//---------------------------------------------------------------------------
#pragma package(smart_init)
