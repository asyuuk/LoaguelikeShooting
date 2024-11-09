#include "EnemyManager.h"
#include"Enemy_A.h"
#include"Enemy_B.h"
#include"Enemy_C.h"
#include<Dxlib.h>
#include"definestruct.h"

using namespace std;
EnemyManager::EnemyManager()
{
	_list.emplace_back(make_shared<Enemy_A>(10, -10));
	_list.emplace_back(make_shared<Enemy_A>(EnemyX, EnemyY));
	_list.emplace_back(make_shared<Enemy_A>(EnemyX_1, EnemyY));
	_list.emplace_back(make_shared<Enemy_A>(EnemyX_2, EnemyY));
	_list.emplace_back(make_shared<Enemy_A>(EnemyX_3, EnemyY));
	_P = std::make_unique<Player>();
	
}



bool EnemyManager::update()
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

void  EnemyManager::draw() const
{
	
	for (const auto enemy : _list)
	{
		
		
			enemy->draw();
		
		
		
		
			_P->draw();
		
			
	}
	
}
