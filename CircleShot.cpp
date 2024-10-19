#include "CircleShot.h"
#include<DxLib.h>

CircleShot::CircleShot()
{
	
}


bool CircleShot::Initialize(float px,float py ,float x, float y)
{
	if (Flag.GetFlag() == false) {

		Setmax(40);
		for (int i = 0; i < Getcount1(); i++)
		{
			angle[i] = (18 * i) * DX_PI / 180;
			angle[i + Getcount1()] = (18 * i) * DX_PI / 180;
			angle2[i] = ((18 * i) + 4) * DX_PI / 180;
			angle2[i +Getcount1()] = ((18 * i) - 4) * DX_PI / 180;

		}
		for (int j = 0; j < 300; j++)
		{
			_x[j] = x;
			_y[j] = y;
		}
		Flag.SetFlag(true);
	}
	
	return true;
}

bool CircleShot::update(float px,float py,float x, float y)
{
	

		for (int i = 0; i < Getmax(); i++)
		{
			if (_x[i]<80 && _x[i]>-80 && _y[i]<80 && _y[i]>-80)
			{
				_x[i] += cos(angle[i % 40]) * 2;
				_y[i] += sin(angle[i % 40]) * 2;
			}
			else
			{
				_x[i] += cos(angle2[i % 40]) * 2;
				_y[i] += sin(angle2[i % 40]) * 2;
			}
		}
		if ( Getgamecount() == Getgamecount2())
		{
			if (Getmax() < 280) {
				Setmax(*in);
				Setgamecount2(*countgame);
				*in += 20;
				*countgame += 20;
			}


		
		
	}
	*counter += 1;
	Setgamecount(*counter);
		
	return true;

}

void  CircleShot::Draw()
{
	*handle = LoadGraph("E:\\Aseprite\\bullet00003.png");
	for (int i = 0; i < Getmax(); i++) {
		DrawGraph(_x[i], _y[i], *handle, true);

	}
}