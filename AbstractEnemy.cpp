#include "AbstractEnemy.h"

AbstractEnemy::AbstractEnemy()
{
	_x = std::make_unique<float>();
	_y = std::make_unique<float>();
	handle = std::make_unique<int>();
	visible = std::make_unique<bool>();
	*_x = 40;
	*_y = 40;
	*handle = 0;
	*visible = true;
}

bool AbstractEnemy::update()
{
	
	return true;
}

void AbstractEnemy::move()
{
	
}