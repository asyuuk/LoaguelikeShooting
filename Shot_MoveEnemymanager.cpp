#include "Shot_MoveEnemymanager.h"
#include"ShotEnemy.h"

Shot_MoveEnemymanager::Shot_MoveEnemymanager()
{
	count = std::make_unique<int>(0);
	_list.emplace_back(std::make_shared<ShotEnemy>(10.0f, 10.4f));
	_list.emplace_back(std::make_shared<ShotEnemy>(60.3f, 10.3f));
	_list.emplace_back(std::make_shared<ShotEnemy>(100.3f, 10.3f));
	_list.emplace_back(std::make_shared<ShotEnemy>(120.3f, 10.3f));
	_list.emplace_back(std::make_shared<ShotEnemy>(140.3f, 10.3f));
}

bool Shot_MoveEnemymanager::update()
{
	if (*count%120 ==0)
	{
		SetEnemys();
	}
	for (auto it = _list.begin(); it != _list.end();)
	{
		if ((*it)->update() == false)
		{
			it = _list.erase(it);
		}
		else
		{
			it++;
		}
	}

	*count+=1;
	return true;

}

void  Shot_MoveEnemymanager::draw() const
{

	for (const auto enemy : _list)
	{


		enemy->draw();



	}

}

void Shot_MoveEnemymanager::SetEnemys()
{
	_list.emplace_back(std::make_shared<ShotEnemy>(10.0f, 10.4f));
	_list.emplace_back(std::make_shared<ShotEnemy>(60.3f, 10.3f));
	_list.emplace_back(std::make_shared<ShotEnemy>(100.3f, 10.3f));
	_list.emplace_back(std::make_shared<ShotEnemy>(120.3f, 10.3f));
	_list.emplace_back(std::make_shared<ShotEnemy>(140.3f, 10.3f));
}