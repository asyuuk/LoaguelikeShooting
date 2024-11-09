#include "InitTowardShot.h"


#include<DxLib.h>
#include"Player.h"




InitTowardShot::InitTowardShot() :AbstractBullets()
{
	
	SetPatternB(2);
	
}


void InitTowardShot::draw()const
{
	*handle = LoadGraph("E:\\Aseprite\\bullet00003.png");
	for (int i = 0; i < *max; i++)
	{
		DrawGraph((float)_x[i], (float)_y[i], *handle, true);
	}
}

