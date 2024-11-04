#include "EnemyMove.h"
#include"abstractEnemy.h"

using namespace std;

EnemyMove::EnemyMove()
{
	setFunction();
}

void EnemyMove::move(abstractEnemy* enemy)
{
	const unsigned int id = enemy->getMovePatternID();
	if (_movePattern.size() <= id)
	{

	}
	(this->*_movePattern[id])(enemy);
	enemy->setX(enemy->getX() + cos(enemy->getAngle()) * enemy->getSpeed());
	enemy->setY(enemy->getY() + sin(enemy->getAngle()) * enemy->getSpeed());
}


void EnemyMove::setFunction()
{
	_movePattern.push_back(&EnemyMove::movePattern00);
	_movePattern.push_back(&EnemyMove::movePattern01);
}


void EnemyMove::movePattern00(abstractEnemy* enemy)
{
	
}