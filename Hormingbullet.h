#pragma once
#include"Task_B.h"
#include<memory>
#include"Enemy_C.h"

class Hormingbullet:public Task_B
{
public:
	Hormingbullet();
	virtual ~Hormingbullet() = default;
	bool Initialize(float px,float py,float x, float y)override;
	bool update(float px,float py,float x, float y)override;
	void Draw()const override;
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
	float GetX()
	{
		for (int i = 0; i < 2560; i++)
			return _x[i];
	}
	float GetY()
	{
		for (int i = 0; i < 2560; i++)
		{
			return _y[i];
		}
	}
	void Setmax(int m)
	{
		*max = m;
	}
	int Getmax()
	{
		return *max;
	}
private:
	std::unique_ptr<float[]>_x;
	std::unique_ptr<float[]>_y;
	std::unique_ptr<int>handle;
	std::unique_ptr<float[]>angle;
	std::unique_ptr<float[]>angle2;
	std::unique_ptr<int>max;
	std::unique_ptr<int> gamecount;
	std::unique_ptr<int>gamecount2;
	std::unique_ptr<int>count;
	std::unique_ptr<float>posx;
	std::unique_ptr<float>posy;
	std::unique_ptr<float>_px;
	std::unique_ptr<float>_py;
};

