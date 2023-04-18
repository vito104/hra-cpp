//---------------------------------------------------------------------------

#pragma hdrstop

#include "Mage.h"

Mage::Mage(int aiDefence, int aiMana):Hero(aiDefence){
	miMana= aiMana;
}

void Mage::Attack(Enemy* aEnemy){
	std::cout << "Mag utoci" << std::endl;
	if(aEnemy->getStrenght() > (miDefence+miMana)){
		miHealth-= aEnemy->getStrenght()-(miDefence+miMana);
        std::cout << "Nepritel ti ubral zivot. " << std::endl;
	}else{
		std::cout << "Porazil jsi nepritele. " << std::endl;
        aEnemy->setStrenght(0);
	}
}

void Mage::setArmor(Armor* aArmor){
		std::cout << "Maximalne plastik hele!" << std::endl;
		//TODO dame do inventare
		//idealne vyhazovat vyjimky throw exception...
}

//---------------------------------------------------------------------------
#pragma package(smart_init)
