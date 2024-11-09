#include "CircleCollider.h"

#include<DxLib.h>
#include<math.h>
#include"Enemy_A.h"
#include"Player.h"
#include"Enemy_B.h"


CircleCollider::CircleCollider()
{
	_x1 = std::make_unique<float>(0);
	_x1_1 = std::make_unique<float>(0);
	_y1 = std::make_unique<float>(0);
	_y1_2 = std::make_unique<float>(0);
	_bx = std::make_unique<float[]>(2560);
	_by = std::make_unique<float[]>(2560);
	_player = std::make_unique<Player>();
	EAc = std::make_unique<Enemy_A>();


	Flag = std::make_unique<Enemy_A>();

	for (int i=0;i<2560;i++)
	{
		auto& ity = _by[i];
		auto& it = _bx[i];
		it = 0;
		ity = 0;
	}

}
bool CircleCollider::Player_EnemyA_update(float x,float  y,float ex,float ey)
{

	return Colliders(x,y,ex,ey);
	
}



bool CircleCollider::Colliders(float _x, float _y, float _x2, float _y2)
{


	*_x1 = _x;
	*_y1 = _y;
	*_x1_1 = _x2;
	*_y1_2 = _y2;
	
	DrawCircle(*_x1, *_y1, 10, GetColor(255, 255, 0));
	DrawCircle(*_x1_1, *_y1_2, 10, GetColor(0, 255, 255));
	float x, y, r,r2,rr;
	x = *_x1 - *_x1_1;

	y = *_y1 - *_y1_2;
	r = pow(x, 2) + pow(y, 2);
	r2 = 10;
	rr = 10 * 10;
	
	if (r < rr)
	{
		DrawCircle((float)*_x1, (float) * _y1, 10, GetColor(200, 0, 200));
		DrawCircle((float)*_x1_1, (float)*_y1_2, 10, GetColor(200, 0, 200));
		
		return false;
	}

	return true;
}

bool CircleCollider::BulletsColliders(float _x, float _y, float _x2[], float _y2[])
{


	*_x1 = _x;
	*_y1 = _y;
	for (int i = 0; i < 2560; i++)
	{
		auto& it = _bx[i];
		it = _x2[i];
		auto& ity = _by[i];
		ity = _y2[i];

	}

	DrawCircle(*_x1, *_y1, 10, GetColor(255, 255, 0));
	for (int i = 0; i < 2560; i++) {
		auto& it = _bx[i];
		auto& ity = _by[i];
		DrawCircle((float)it,(float)ity , 10, GetColor(0, 255, 255));
	}
	
	float x[2560], y[2560], r, r2, rr;
	for (int i = 0; i < 2560; i++)
	{
		auto& it = _bx[i];
		auto& ity = _by[i];

		x[i] = *_x1 - it;
		y[i] = *_y1 - ity;
		r = pow(x[i], 2) + pow(y[i], 2);
		
		r2 = 2;
		rr = 2 * 2;
		if (r < rr)
		{
			DrawCircle((float)*_x1, (float)*_y1, 2, GetColor(230, 0, 123));
			DrawCircle((float)it, (float)ity, 2, GetColor(224, 245, 244));
			return  false;
		}
		return true;
	}

	
}