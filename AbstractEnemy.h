#pragma once
#include"Task.h"
#include<memory>
#include"CircleCollider.h"
class CircleCollider;
class AbstractEnemy:public Task
{
public:
	AbstractEnemy();
	virtual ~AbstractEnemy() = default;
	bool update()override;

	const float& GetX()
	{
		return *_x;
	}
	const float& GetY()
	{
		return *_y;
	}
	const void SetX(float x)
	{
		*_x = x;
	}

	const void SetY(float y)
	{
		*_y = y;
	}
	const bool Getvisible(bool flag)
	{
		*visible = flag;
		return *visible;
	}
	

protected:
	std::unique_ptr<float>_x;
	std::unique_ptr<float>_y;
	std::unique_ptr<int>handle;
	std::unique_ptr<bool>visible;
	void move();

};

