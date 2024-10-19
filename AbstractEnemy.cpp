#include "AbstractEnemy.h"

BulletManager bulletmanager;
MovePatternEnemys movepatternenemys;

AbstractEnemy::AbstractEnemy(float x,float y)
{
	
	_x = std::make_unique<float>(x);
	_y = std::make_unique<float>(y);
	handle = std::make_unique<int>(0);
	visible = std::make_unique<bool>(0);
	count = std::make_unique<int>(0);
	_angle1 = std::make_unique<float>(0);
	_angle2 = std::make_unique<float>(0);
	pattern = std::make_unique<int>(0);
	_speed = std::make_unique<float>(0);
	bulletpattern = std::make_unique<int>(0);
	counterbullet = std::make_unique<int>(0);
	selection = std::make_unique<int>(0);
	shotflag = std::make_unique<bool>(false);
	
	*visible = true;
	
}

bool AbstractEnemy::update()
{
	movepatternenemys.move(this);
	bulletmanager.shot(this);
	
	*count+=1;
	return true;
}

void AbstractEnemy::move()
{
	
}