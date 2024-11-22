#include "CircleShot.h"
#include<DxLib.h>
#include"AbstractBullets.h"




CircleShot::CircleShot():AbstractBullets()
{

	SetPatternB(0);
	Set_X(0, 2560);
	Set_Y(0, 2560);
}



void  CircleShot::draw()const
{
	*handle = LoadGraph("C:\\Users\\yusak\\OneDrive\\ƒhƒLƒ…ƒƒ“ƒg\\Aseprite\\Sprite-0001.png");
	for (int i = 0; i < *max; i++) {
		DrawGraph(_x[i], _y[i], *handle, true);

	}
}