#pragma once
#include"Task.h"
#include<memory>
#include"Enemy_A.h"
#include"Enemy_B.h"

class Enemy_A;
class Enemy_B;

class Player :public Task
{
public:
	Player();
	~Player();
	bool update()override;
	void draw() override;
	void Bulletdraw()override;
	 float& GetX()
	{
		return *_x;
	}
	 float& GetY()
	{
		return *_y;
	}

	void SetX(float x)
	{
		*_x = x;
	}
	void SetY(float y)
	{
		*_y = y;
	}
	bool GetVisible(bool flag)
	{
		*visible = flag;
		return *visible;
	}

private:
	void move();
	std::unique_ptr<float>_x;
	std::unique_ptr<float>_y;
	std::unique_ptr<int>handle;
	std::unique_ptr<bool>visible;
	std::unique_ptr<float>speed;
	
};

