#include "EnemyManager.h"
#include"Enemy_A.h"
#include"Enemy_B.h"
#include"Enemy_C.h"
#include"Player.h"
#include<Dxlib.h>
#include"CircleCollider.h"
using namespace std;
CircleCollider c;
Player _P;
EnemyManager::EnemyManager()
{
	_list.emplace_back(make_shared<Enemy_A>(10,-10));
	_list.emplace_back(make_shared<Enemy_A>(50,-10));
	_list.emplace_back(make_shared<Enemy_A>(100,-10));
	_list.emplace_back(make_shared<Enemy_A>(150, -10));
	_list.emplace_back(make_shared<Enemy_A>(200, -10));
	

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

void  EnemyManager::draw()
{
	_P.update();
	for (const auto enemy : _list)
	{
		
		if (c.Player_EnemyA_update(_P.GetX(), _P.GetY(), enemy->GetX(), enemy->GetY())) {
			enemy->draw();
		}
		
		
		if (c.Player_EnemyA_update(_P.GetX(),_P.GetY(),enemy->GetX(),enemy->GetY()))
		{
			_P.draw();
		}
			
	}
}
void EnemyManager::Bulletdraw()
{
	for (const auto enemy : _list)
	{
		enemy->Bulletdraw();
	}
}