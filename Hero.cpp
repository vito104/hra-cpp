//---------------------------------------------------------------------------

#pragma hdrstop

#include "Hero.h"

Hero::Hero(int aiDefence){
	int pIndex = 0;
	miDefence= aiDefence;
	miHealth= 100;
    miMaxCapacity = 100;
	mArmor= nullptr;
	miLevel= 0;
	for(pIndex=0;pIndex<SI_ARRAY_SIZE;pIndex++){
		miInventory[pIndex]=nullptr;
	}
}

void Hero::printInfo(){
	std::cout << "Zivot: " << miHealth << std::endl;
    std::cout << "Obrana: " << miDefence << std::endl;
}

void Hero::printInventory(){
	int pIndex=0;
	for(pIndex=0;pIndex<SI_ARRAY_SIZE;pIndex++){
		if(miInventory[pIndex]==nullptr){
			std::cout << pIndex + 1 <<  ". pozice: prazdna";
		}else{
		   std::cout << pIndex + 1 <<  ". pozice: ";
		   miInventory[pIndex]->printName();
		}
        std::cout << std::endl;

		//miInventory[pIndex]=nullptr;
	}
}

void Hero::insertIntoInventory(Item* aItem){
   int pWeight = 0;
   int pIndex=0;
   bool pbFound=false;
   for(pIndex=0;pIndex<SI_ARRAY_SIZE;pIndex++){
	 if(miInventory[pIndex]!=nullptr){
	   pWeight += miInventory[pIndex]->getWeight();
	 }
   }

   if((pWeight + aItem->getWeight()) <= miMaxCapacity){
		pbFound=false;
		pIndex=0;
		while(!pbFound && pIndex<SI_ARRAY_SIZE){
		  if(miInventory[pIndex]==nullptr){
			miInventory[pIndex]=aItem;
			aItem->printName();
			std::cout << " byl ulozen do pozice " << pIndex+1 << std::endl;
			pbFound=true;
            aItem= nullptr;
		  }else{
			pIndex++;
		  }
		}

		if(!pbFound){
			std::cout << "Nemas misto v inventari." << std::endl;
		}

   }else{
        std::cout << "Tento predmet uz neuneses. " << std::endl;
   }

}

int Hero::getHealth(){
    return miHealth;
}

//abstraktni metoda nesmi mit implementaci
/*void Hero::Attack(Enemy* aEnemy){
	std::cout << "Hero utoci" << std::endl;
	if(aEnemy->getStrenght() > miDefence){
		miHealth-= aEnemy->getStrenght()-miDefence;
        std::cout << "Nepritel ti ubral zivot. " << std::endl;
	}else{
		std::cout << "Porazil jsi nepritele. " << std::endl;
	}
} */

Hero::~Hero(){
    delete(mArmor);
}

//---------------------------------------------------------------------------
#pragma package(smart_init)
