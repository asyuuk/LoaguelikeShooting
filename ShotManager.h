#pragma once
#include<memory>
#include<list>

#include"Task.h"
#include"AbstractBullets.h"
class AbstractBullets;

class ShotManager:public Task
{
public:
	ShotManager();
	virtual ~ShotManager() = default;
	bool update()override;
	void draw()const override;
private:
	std::list<std::shared_ptr<AbstractBullets>>_list;

};

