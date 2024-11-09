#include "ShotManager.h"
#include"CircleShot.h"
#include"definestruct.h"
ShotManager::ShotManager()
{
	_list.emplace_back(std::make_shared<CircleShot>(10, -10));
	_list.emplace_back(std::make_shared<CircleShot>(EnemyX, EnemyY));
	_list.emplace_back(std::make_shared<CircleShot>(EnemyX_1, EnemyY));
}

bool ShotManager::update()
{
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
	return true;
}

void ShotManager::draw()const
{
	for (const auto it : _list)
	{
		it->draw();
	}
}