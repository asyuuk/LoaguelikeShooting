#include "Enemy_A.h"

#include<DxLib.h>

BulletManager bulletmanagerEnemy_A;

Enemy_A::Enemy_A() :AbstractEnemy(0, 0)
{

}

Enemy_A::Enemy_A(float x,float y):AbstractEnemy(x,y)
{
	*_x = x;
	*_y = y;
	
	*pattern = 2;
	*selection = 0;

	for (int i = 0; i < 10; i++)
	{
		_vx.push_back(0);
		_vy.push_back(0);
	}


	
}
Enemy_A::~Enemy_A()
{
	*handle = 0;
	DeleteGraph(*handle);

}


void Enemy_A::draw()
{
	*handle = LoadGraph("E:\\Aseprite\\bluearchiveyuuka.png");


	DrawGraph((float)*_x, (float)*_y, *handle, TRUE);
	
	
}

