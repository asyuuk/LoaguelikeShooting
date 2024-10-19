#pragma once
#include"Task_B.h"
#include<memory>
#include"Enemy_C.h"

class Enemy_C;


class InitTowardShot:public Task_B
{
public:
	InitTowardShot();
	virtual ~InitTowardShot() = default;
	virtual bool Initialize(float px,float py,float x, float y)override;
	virtual bool update(float px,float py,float _x, float _y)override;
	virtual void Draw()const override;
	void  toward();
	float GetX()
	{
		for (int i = 0; i < 2560; i++)
		{
			return _x[i];

		}
		
	}
	float GetY()
	{
		for (int i = 0; i < 2560; i++)
		{
			return _y[i];

		}

	}
	float GetangleX()
	{
		for (int i = 0; i < 2560; i++)
		{
			return _angleX[i];

		}

	}
	float GetangleY()
	{
		for (int i = 0; i < 2560; i++)
		{
			return _angleY[i];

		}

	}
	int Getcount()
	{
		return *count;
	}
	void SetX(float x)
	{
		for (int i = 0; i < 2560; i++)
		{
			_x[i] = x;
		}
	}
	void SetY(float y)
	{
		for (int i = 0; i < 2560; i++)
		{
			_y[i] = y;
		}
	}
	void SetangleX(float anglex[])
	{
		for (int i = 0; i < 2560; i++)
		{
			_angleX[i] = anglex[i];
		}
	}
	void SetangleY(float angley[])
	{
		for (int i = 0; i < 2560; i++)
		{
			_angleY[i] = angley[i];
		}
	}

private:
	std::unique_ptr<float[]>_x;
	std::unique_ptr<float[]>_y;
	std::unique_ptr<float[]>_angleX;
	std::unique_ptr<float[]>_angleY;
	std::unique_ptr<int>count;
	std::unique_ptr<int>max;
	std::unique_ptr<int>count1;
	std::unique_ptr<int>handle;
	std::unique_ptr<float>posx;
	std::unique_ptr<float>posy;
	std::unique_ptr<int>gamecount;
	std::unique_ptr<int>gamecount2;
	std::unique_ptr<float>_px;
	std::unique_ptr<float>_py;
	Enemy_C FlagC;
	
};

