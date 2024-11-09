#include "RandamShot.h"
#include<DxLib.h>
#include"AbstractBullets.h"

RandamShot::RandamShot():AbstractBullets()
{
	SetPatternB(0);
}

RandamShot::RandamShot(int x,int y) :AbstractBullets(x,y)
{
	Set_X(x, 2560);
	Set_Y(y, 2560);
}
RandamShot::~RandamShot()
{
	DeleteGraph(*handle);
}



void  RandamShot::draw()const
{
	*handle = LoadGraph("E:\\Aseprite\\bullet00003.png");
	for (int i = 0; i < *max; i++)
	{
		DrawGraph(_x[i], _y[i], *handle, true);
	}

}

