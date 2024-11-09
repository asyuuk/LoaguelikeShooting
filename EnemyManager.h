#pragma once
#include<memory>
#include<list>
#include"Task.h"

#include"AbstractEnemy.h"
#include"Player.h"
#include"CircleCollider.h"

class CircleCollider;

class AbstractEnemy;
class Player;

class EnemyManager:public Task
{
public:
	EnemyManager();
	virtual ~EnemyManager() = default;
	bool update() override;
	void draw()const override;
	

private:
	std::list<std::shared_ptr<AbstractEnemy>>_list;
	

	std::unique_ptr<CircleCollider> c;
	std::unique_ptr<Player> _P;


};

