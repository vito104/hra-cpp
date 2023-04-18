//---------------------------------------------------------------------------

#pragma hdrstop

#include "Forest.h"

Forest::Forest(Enemy* aEnemy, Item* aItem){
	mEnemy= aEnemy;
	mItem= aItem;
}

void Forest::visit(Hero* aHero){
	if(mEnemy!=nullptr){
	  std::cout << "Budes bojovat:" << std::endl;
	  aHero->Attack(mEnemy);

	  if(mEnemy->getStrenght() <= 0){
		delete(mEnemy);
		mEnemy= nullptr;
	  }
	}

	if(mEnemy==nullptr && mItem!=nullptr){
		aHero->insertIntoInventory(mItem);
	}

}
//---------------------------------------------------------------------------
#pragma package(smart_init)
