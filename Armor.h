//---------------------------------------------------------------------------

#ifndef ArmorH
#define ArmorH

#include "Item.h"
#include <string>
#include <iostream>

class Armor : public Item{
private:
	std::string msName;
protected:
	int miDefence;
public:
	Armor(int aiDefence, int aiWeight, std::string asName);

	int getDefence();

	virtual int getWeight() = 0;

    void printName();

};

//---------------------------------------------------------------------------
#endif
