#include "CircleShot.h"
#include<DxLib.h>
#include"AbstractBullets.h"

CircleShot::CircleShot():AbstractBullets()
{
	
}

CircleShot::CircleShot(int x, int y):AbstractBullets(x,y)
{
	SetPatternB(0);
	Set_X(x,256);
	Set_Y(y,256);
}



void  CircleShot::draw()const
{
	*handle = LoadGraph("E:\\Aseprite\\bullet00003.png");
	for (int i = 0; i < *max; i++) {
		DrawGraph(_x[i], _y[i], *handle, true);

	}
}