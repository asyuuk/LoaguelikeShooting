#pragma once
#include<memory>
#include<list>
#include"AbstractEnemy.h"
#include"Task.h"
#include"AbstractBullets.h"
class AbstractBullets;
class AbstractEnemy;

class ShotManager:public Task
{
public:
	ShotManager();
	virtual ~ShotManager() = default;
	bool update()override;
	void SetShot();
	void draw()const override;
	int GetCount()
	{
		return *count;
	}
	void SetCount(int x)
	{
		*count += x;
	}
private:
	std::list<std::shared_ptr<AbstractBullets>>_list;
	
	std::unique_ptr<int>count;
};

