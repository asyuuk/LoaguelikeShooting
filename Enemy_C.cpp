#include "Enemy_C.h"
#include<DxLib.h>
#include"AbstractEnemy.h"





Enemy_C::Enemy_C(float _x,float _y):AbstractEnemy(_x,_y)
{
	*x = _x;
	*y = _y;
	
	*pattern = 3;

}


void  Enemy_C::draw()const
{
	*handle = LoadGraph("E:\\Aseprite\\chara0001.png");
	DrawGraph((float)*x, (float)*y, *handle, TRUE);
}
