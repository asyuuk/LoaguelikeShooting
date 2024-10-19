#include "Hormingbullet.h"
#include<DxLib.h>
#include"Player.h"
Player playerangle;

Enemy_C Flag_C;

Hormingbullet::Hormingbullet()
{
	count = std::make_unique<int>(0);
	_x = std::make_unique<float[]>(2560);
	_y = std::make_unique<float[]>(2560);
	handle = std::make_unique<int>(0);
	angle = std::make_unique<float[]>(2560);
	angle2 = std::make_unique<float[]>(2560);
	max = std::make_unique<int>(30);
	gamecount = std::make_unique<int>(0);
	gamecount2 = std::make_unique<int>(10);
	posx = std::make_unique<float>(0);
	posy = std::make_unique<float>(0);
	for (int i = 0; i < 2560; i++)
	{
		_x[i] = -10;
		_y[i] = -10;
	}
	*posx = -10;
	*posy = -10;
}

bool Hormingbullet::Initialize(float px,float py,float x, float y)
{
	if (Flag_C.GetFlag() == false)
	{
		*max = 20;
		for (int i = 0; i < 2560; i++)
		{
			angle[i] = 0;
			angle2[i] = 0;
			_x[i] = x;
			_y[i] = y;
		}
		
	}
	Flag_C.SetFlag(true);
	*posx = x;
	*posy = y;
	*_px = px;
	*_py = py;
	return true;
}

bool Hormingbullet::update(float px,float py,float x, float y)
{
	if (Flag_C.GetFlag() == true)
	{
		for (int i = 0; i < *max; i++)
		{
			
			if (0 < *count)
			{
				
				angle[0] = atan2((double)(py - *posy), (double)(px - *posx));
				_x[0] += (float)(cos(angle[0]) * 1.0);
				_y[0] += (float)(sin(angle[0]) * 1.0);
				if (i > 0) {
					angle[i] = atan2((double)(_y[i - 1]-_y[i]), (double)(_x[i - 1]- _x[i]));
					_x[i] += (float)(cos(angle[i]) * 1);
					_y[i] += (float)(sin(angle[i]) * 1);

				}
				
			}
			if (*gamecount == *gamecount2)
			{
				if (*max < 300)
				{
					*max += 10;
					*gamecount2 += 20;
				}
			}
		}
	}
	
	*count += 1;
	*gamecount += 1;
	return true;
}

void Hormingbullet::Draw()const
{
	*handle = LoadGraph("E:\\Aseprite\\bullet00003.png");
	for (int i = 0; i < *max; i++)
	{
		DrawGraph((float)_x[i], (float)_y[i], *handle, true);
	}
}