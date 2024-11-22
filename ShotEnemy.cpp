#include "ShotEnemy.h"
#include"Image.h"
#include<DxLib.h>

ShotEnemy::ShotEnemy(float x,float y):AbstractEnemyShot(x,y)
{
	*_x = x;
	*_y = y;
	*Shotpattern = 0;
	*movepattern = 1;
	*countpattern = 0;
	for (int i = 0; i < 2560; i++)
	{
		_sx[i] = x;
		_sy[i] = y;
	}
}

void ShotEnemy::draw()const
{
	*handle = LoadGraph("C:\\Users\\yusak\\OneDrive\\ドキュメント\\Aseprite\\En2.png");
	
	DrawGraph(*_x, *_y, Image::GetInst()->getenemyshot(), true);
	
}

void ShotEnemy::drawShot()const
{
	*shothandle = LoadGraph("C:\\Users\\yusak\\OneDrive\\ドキュメント\\Aseprite\\Sprite-0001.png");
	for (int i = 0; i < *max; i++)
	{
		DrawGraph(_sx[i], _sy[i], Image::GetInst()->getbullet(), true);
	}
}