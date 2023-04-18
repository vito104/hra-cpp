//---------------------------------------------------------------------------

#pragma hdrstop

#include "Enemy.h"

Enemy::Enemy(int aiStrenght){
	miStrenght= aiStrenght;
}

int Enemy::getStrenght(){
    return miStrenght;
}

void Enemy::setStrenght(int aiStrenght){
	miStrenght= aiStrenght;
}
//---------------------------------------------------------------------------
#pragma package(smart_init)
