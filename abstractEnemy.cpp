#include "abstractEnemy.h"
#include<DxLib.h>

abstractEnemy::abstractEnemy(float x, float y):_x(x),_y(y),_speed(0),_angle(0),_counter(0),_width(0),_height(0),_movepatternID(0)
{
}

void abstractEnemy::initialize()
{
	SetSize();
}

bool abstractEnemy::Update()
{
	_mover.move(this);
	_counter++;
	return isInside();
}

bool abstractEnemy::isInside() const
{
	if (_counter < 60)
	{
		return true;
	}
	return true;
}