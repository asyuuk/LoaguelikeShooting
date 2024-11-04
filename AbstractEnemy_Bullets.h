#pragma once
#include"Task.h"
class AbstractEnemy:public Task
{
public:
	AbstractEnemy(float x, float y);
	virtual ~AbstractEnemy() = default;

	bool update();
	int _x;
	int _y;
	int handle;
};

class AbstractBullet:public Task
{
public:
	AbstractBullet(float ex, float ey);
	virtual ~AbstractBullet() = default;

	bool update();
protected:
	int _x[256];
	int _y[256];
	int handle;
};

