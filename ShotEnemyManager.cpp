#include "ShotEnemyManager.h"
#include"Enemy_A.h"
#include"CircleShot.h"


ShotEnemyManager::ShotEnemyManager()
{

}

bool ShotEnemyManager::update()
{

}

void ShotEnemyManager::draw()const
{

}

void ShotEnemyManager::SetEnemyshot()
{
	_listEnemy.push_back(std::make_shared<Enemy_A>(100, 100));
	_listBullet.push_back(std::make_shared<CircleShot>(100, 100));

}

