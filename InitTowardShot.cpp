#include "InitTowardShot.h"
#include"AbstractEnemy.h"

#include<DxLib.h>
#include"Player.h"


AbstractEnemy *timer;

InitTowardShot::InitTowardShot()
{
	_x = std::make_unique<float[]>(2560);
	_y = std::make_unique<float[]>(2560);
	_angleX = std::make_unique<float[]>(2560);
	_angleY = std::make_unique<float[]>(2560);
	max = std::make_unique<int>(0);
	count = std::make_unique<int>(0);
	count1 = std::make_unique<int>(30);
	handle = std::make_unique<int>(0);
	posx = std::make_unique<float>(0);
	posy = std::make_unique<float>(0);
	gamecount = std::make_unique<int>(0);
	gamecount2 = std::make_unique<int>(10);
	_px = std::make_unique<float>(0);
	_py = std::make_unique<float>(0);


	for (int i = 0; i < 2560; i++)
	{
		_x[i] = -10;
		_y[i] = -10;
	}
	*posx = -10;
	*posy = -10;
}
bool InitTowardShot::Initialize(float px,float py,float x,float y)
{
	if (FlagC.GetFlag() == false)
	{
		*max = 20;
		for (int i = 0; i < *count1; i++)
		{
			_angleX[i] = (25 * i) * DX_PI / 180;
			_angleX[i + *count1] = ((10 * i) + 4) * DX_PI / 180;
			_angleY[i] = (25 * i) * DX_PI / 180;
			_angleY[i + *count1] = ((10 * i) - 4) * DX_PI / 180;
		}
		for (int i = 0; i < 300; i++)
		{
			_x[i] = x;
			_y[i] = y;


		}
		*_px = px;
		*_py = py;

		*posx = x;
		*posy = y;
		FlagC.SetFlag(true);

	}

	return true;


}


bool InitTowardShot::update(float px,float py,float x, float y)
{
	
	for (int i = 0; i < *max; i++)
	{
		
		if (*count < 20)
		{
			_x[i] += (float)cos(_angleX[i % 40]) * 4;
			_y[i] += (float)sin(_angleY[i % 40]) * 4;


		}

		if (20 < *count)
		{
			*_px = px;
			*_py = py;
			if (20 < *count < 30) {
				_angleX[0] = atan2((double)(*_py-*posy), (double)(*_px - *posx));

				_x[0] += (float)(cos(_angleX[0]) * 4.0);
				_y[0] += (float)(sin(_angleX[0]) * 4.0);
				
				
			}
			
			if (i > 0)
			{
				_angleX[i] = atan2((double)(_y[i-1]-_y[i]), (double)(_x[i-1]-_x[i]));
				_x[i] += (float)(cos(_angleX[i]) * 4.0);
				_y[i] += (float)(sin(_angleX[i]) * 4.0);
			}
		}
		if (*gamecount == *gamecount2)
		{
			if (*max < 300)
			{
				*max += 20;
				*gamecount2 += 20;
			}
		}

		
	}
	
	*count += 1;
	*gamecount += 1;
	return true;
}

void InitTowardShot::Draw()const
{
	*handle = LoadGraph("E:\\Aseprite\\bullet00003.png");
	for (int i = 0; i < *max; i++)
	{
		DrawGraph((float)_x[i], (float)_y[i], *handle, true);
	}
}

