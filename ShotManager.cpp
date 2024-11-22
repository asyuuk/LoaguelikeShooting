#include "ShotManager.h"
#include"CircleShot.h"
#include"RandamShot.h"
#include"definestruct.h"
ShotManager::ShotManager()
{
	_list.emplace_back(std::make_shared<CircleShot>());
	_list.emplace_back(std::make_shared<CircleShot>());
	_list.emplace_back(std::make_shared<CircleShot>());
	_list.emplace_back(std::make_shared<CircleShot>());
	_list.emplace_back(std::make_shared<CircleShot>());
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

void ShotManager::SetShot()
{
	if (GetCount() == 40)
	{
		_list.emplace_back(std::make_shared<CircleShot>(250, 100));
		_list.emplace_back(std::make_shared<CircleShot>(EnemyX, 100));
		_list.emplace_back(std::make_shared<CircleShot>(EnemyX_1, 100));
		_list.emplace_back(std::make_shared<CircleShot>(EnemyX_2, 100));
		_list.emplace_back(std::make_shared<CircleShot>(EnemyX_3, 100));
	}
	
}