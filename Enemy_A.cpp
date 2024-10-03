#include "Enemy_A.h"
#include<DxLib.h>
CircleCollider Ecol;

Enemy_A::Enemy_A() {
	*_x = 100;
	*_y = 50;
	shotFlag = std::make_unique<bool>();
	
}
Enemy_A::~Enemy_A()
{
	*handle = 0;
	DeleteGraph(*handle);

}
bool Enemy_A::update()
{
	SetFlag(false);
	SetX(30);
	SetY(20);
	return true;
}
void Enemy_A::draw()
{
	*handle = LoadGraph("E:\\Aseprite\\bluearchiveyuuka.png");
	if (Ecol.Player_EnemyA_update()) {
		DrawGraph((float)*_x, (float)*_y, *handle, TRUE);
	}

}

