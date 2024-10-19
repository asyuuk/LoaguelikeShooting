#include "Enemy_B.h"
#include<DxLib.h>
BulletManager BEbullet;

Enemy_B::Enemy_B() :AbstractEnemy(0, 0)
{

}

Enemy_B::Enemy_B(float x,float y):AbstractEnemy(x,y)
{
	*_x = x;
	*_y = y;
	*pattern = 2;
	*selection = 1;
}
Enemy_B::~Enemy_B()
{
	*handle = 0;
	DeleteGraph(*handle);
}
void Enemy_B::draw()
{
	*handle = LoadGraph("E:\\Aseprite\\chara0001.png");

	
	DrawGraph((float)*_x, (float)*_y, *handle, TRUE);
	
	
}
