//---------------------------------------------------------------------------

#ifndef EnemyH
#define EnemyH

class Enemy{
protected:
	int miStrenght;
public:
	Enemy(int aiStrenght);

	int getStrenght();

	void setStrenght(int aiStrenght);
};

//---------------------------------------------------------------------------
#endif
