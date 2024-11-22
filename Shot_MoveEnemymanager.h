#pragma once
#include<list>
#include<memory>
#include"Task.h"
#include"AbstractEnemyShot.h"
#include"ShotEnemy.h"

class AbstractEnemyShot;
class Shot_MoveEnemymanager:public Task
{
public:
	Shot_MoveEnemymanager();
	virtual ~Shot_MoveEnemymanager() = default;
	void SetEnemys();
	bool update()override;
	void draw()const override;
protected:
	std::list<std::shared_ptr<AbstractEnemyShot>>_list;
	std::unique_ptr<int>count;
};

