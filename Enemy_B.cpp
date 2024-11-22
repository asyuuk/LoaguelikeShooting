#include "Enemy_B.h"
#include<DxLib.h>


Enemy_B::Enemy_B() :AbstractEnemy()
{
	*x = 0;
	*y = 0;

}


Enemy_B::Enemy_B(float _x,float _y):AbstractEnemy(_x,_y)
{
	*x = _x;
	*y = _y;
	*pattern = 2;

}
void Enemy_B::draw()const
{
	*handle = LoadGraph("E:\\Aseprite\\chara0001.png");


	DrawGraph((float)*x, (float)*y, *handle, TRUE);

}

