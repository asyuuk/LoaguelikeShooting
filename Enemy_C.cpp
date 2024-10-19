#include "Enemy_C.h"
#include<DxLib.h>

BulletManager BCBullet;

Enemy_C::Enemy_C() :AbstractEnemy(0, 0)
{
	
}



Enemy_C::Enemy_C(float x,float y):AbstractEnemy(x,y)
{
	*_x = 25;
	*_y = -50;
	
	*pattern = 3;
	*selection = 2;
}

Enemy_C::~Enemy_C()
{
	*handle = 0;
	DeleteGraph(*handle);
}

void  Enemy_C::draw()
{
	*handle = LoadGraph("E:\\Aseprite\\chara0001.png");
	DrawGraph((float)*_x, (float)*_y, *handle, TRUE);
}
