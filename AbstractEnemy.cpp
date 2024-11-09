#include "AbstractEnemy.h"
#include"MovePatternEnemys.h"



class MovePatternEnemys;

AbstractEnemy::AbstractEnemy() :
	x(std::make_unique<int>(0)),
	y(std::make_unique<int>(0)),
	handle(std::make_unique<int>(0)),
	visible(std::make_unique<bool>(true)),
	count(std::make_unique<int>(0)),
	_angle1(std::make_unique<int>(0)),
	_angle2(std::make_unique<int>(0)),
	pattern(std::make_unique<int>(0)),
	_speed(std::make_unique<int>(0)),
	Bhandle(std::make_unique<int>(0)),
	bulletpattern(std::make_unique<int>(0)),
	counterbullet(std::make_unique<int>(0)),
	selection(std::make_unique<int>(0)),
	shotflag(std::make_unique<bool>(false))
	
{
	move = std::make_shared<MovePatternEnemys>();
	


}

AbstractEnemy::AbstractEnemy(int _x,int _y):
	x(std::make_unique<int>(_x)),
	y(std::make_unique<int>(_y)),
	handle(std::make_unique<int>(0)),
	visible(std::make_unique<bool>(true)),
	count(std::make_unique<int>(0)),
	_angle1(std::make_unique<int>(0)),
	_angle2(std::make_unique<int>(0)),
	pattern(std::make_unique<int>(0)),
	_speed(std::make_unique<int>(0)),
	Bhandle(std::make_unique<int>(0)),
	bulletpattern(std::make_unique<int>(0)),
	counterbullet(std::make_unique<int>(0)),
	selection(std::make_unique<int>(0)),
	shotflag(std::make_unique<bool>(false))
{
	move = std::make_shared<MovePatternEnemys>();
	
	
	
}

bool AbstractEnemy::update()
{
	move->move(this);

	*count+=1;
	return true;
}

