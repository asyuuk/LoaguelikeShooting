#include "RandamShot.h"
#include<DxLib.h>
#include"AbstractBullets.h"



RandamShot::RandamShot() :AbstractBullets()
{
	*patternb = 1;
	
}
RandamShot::~RandamShot()
{
	DeleteGraph(*handle);
}



void  RandamShot::draw()const
{
	*handle = LoadGraph("E:\\Aseprite\\bullet0001.png");
	for (int i = 0; i < *max; i++)
	{
		DrawGraph(_x[i], _y[i], *handle, true);
	}

}

