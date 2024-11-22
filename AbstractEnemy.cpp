#include "AbstractEnemy.h"
#include"MovePatternEnemys.h"
#include"AbstractBullets.h"



class MovePatternEnemys;


AbstractEnemy::AbstractEnemy() :
	x(std::make_unique<float>(0)),
	y(std::make_unique<float>(0)),
	handle(std::make_unique<int>(0)),
	visible(std::make_unique<bool>(true)),
	count(std::make_unique<int>(0)),
	_angle1(std::make_unique<float>(0)),
	_angle2(std::make_unique<float>(0)),
	pattern(std::make_unique<int>(0)),
	_speed(std::make_unique<int>(0)),
	Bhandle(std::make_unique<int>(0)),
	bulletpattern(std::make_unique<int>(0)),
	counterbullet(std::make_unique<int>(0)),
	selection(std::make_unique<int>(0)),
	shotflag(std::make_unique<bool>(false))
{
	move = std::make_shared<MovePatternEnemys>();
	shot = std::make_shared<AbstractBullets>();


}
AbstractEnemy::AbstractEnemy(float _x,float _y):
	x(std::make_unique<float>(_x)),
	y(std::make_unique<float>(_y)),
	handle(std::make_unique<int>(0)),
	visible(std::make_unique<bool>(true)),
	count(std::make_unique<int>(0)),
	_angle1(std::make_unique<float>(0)),
	_angle2(std::make_unique<float>(0)),
	pattern(std::make_unique<int>(0)),
	_speed(std::make_unique<int>(0)),
	Bhandle(std::make_unique<int>(0)),
	bulletpattern(std::make_unique<int>(0)),
	counterbullet(std::make_unique<int>(0)),
	selection(std::make_unique<int>(0)),
	shotflag(std::make_unique<bool>(false))
{
	move = std::make_shared<MovePatternEnemys>();
	shot = std::make_shared<AbstractBullets>();
	
	
}

bool AbstractEnemy::update()
{
	move->move(this);
	shot->Set_X(GetX(), 2560);
	shot->Set_Y(GetY(), 2560);
	*count+=1;
	return visibleEnemy();
}

bool AbstractEnemy::visibleEnemy()
{
	if (*x > 800 || *x < 0 || *y>800 || *y < 0)
	{
		return false;
	}
	return true;

}