#include "Enemy_A.h"
#include"AbstractEnemy.h"
#include<DxLib.h>
#include"Image.h"


Enemy_A::Enemy_A() :AbstractEnemy()
{
	*x = 0;
	*y = 0;
}

Enemy_A::Enemy_A(float _x,float _y):AbstractEnemy(_x,_y)
{
	*x = _x;
	*y = _y;
	
	*pattern = 0;
	
}



void Enemy_A::draw()const
{


	DrawGraph((float)*x, (float)*y, Image::GetInst()->getenemyA(), TRUE);
	
	
}
