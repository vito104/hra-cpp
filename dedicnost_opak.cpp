#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include "dedicnost_opak.h"

#include <stdio.h>

int _tmain(int argc, _TCHAR* argv[]) 
{

	Hero* hrac;
	std::string psVolba;
	std::cout << "Vyber si typ hrdiny: "  << std::endl;
	std::cout << "Paladin" << std::endl;
	std::cout << "Mag" << std::endl;
	std::cout << "Lucisnik" << std::endl;
	std::cin >> psVolba;

	if(psVolba=="Paladin"){
		hrac=new Paladin(100,100);
	}else if(psVolba=="Lucisnik"){
		hrac=new Archer(100,50);
	}else if(psVolba=="Mag"){
		hrac=new Mage(100,20);
	}else{
		//hrac=new Hero(100);
	}

	Enemy* drak = new Enemy(160);

	//hrac->Attack(drak);


	Armor* brneni;
	Armor* lepsi_brneni;
	brneni = new PlateArmor(100,50,"Pl. Brneni lv. 1");
	lepsi_brneni = new PlateArmor(100,55,"Pl. Brneni lv. 2");

	hrac->setArmor(brneni);

	//std::cout << "Brneni hmotnost: " << brneni->getWeight() << std::endl;
	//brneni->printName();

	hrac->printInventory();
	//hrac->insertIntoInventory(lepsi_brneni);
	//hrac->printInventory();

	Location* les_1 = new Forest(drak,lepsi_brneni);
	les_1->visit(hrac);
    hrac->printInfo();
	hrac->printInventory();

	/*vyber hrdinu - mag 1 , lucisnik 2, paladin 3
	cin >> volba

	if (volba==1)
		Mage* mag = new Mage(10,10);
	if(volba==2)
		Archer.....
	if volba 3... */






	return 0;
}
