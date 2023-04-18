//---------------------------------------------------------------------------

#ifndef ItemH
#define ItemH

class Item{
protected:
	int miWeight;
public:
	Item(int aiWeight);

	virtual int getWeight() = 0;

    virtual void printName() = 0;

};

//---------------------------------------------------------------------------
#endif
