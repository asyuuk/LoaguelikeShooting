#include "Hormingbullet.h"
#include<DxLib.h>
#include"Player.h"
#include"AbstractBullets.h"

Hormingbullet::Hormingbullet()
{
	

	for (int i = 0; i < 2560; i++)
	{
		_x[i] = -10;
		_y[i] = -10;
	}
	
}

void Hormingbullet::draw()const
{
	*handle = LoadGraph("E:\\Aseprite\\bullet00003.png");
	for (int i = 0; i < *max; i++)
	{
		DrawGraph((float)_x[i], (float)_y[i], *handle, true);
	}
}