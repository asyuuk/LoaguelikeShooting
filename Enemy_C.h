#pragma once
#include"AbstractEnemy.h"
#include<memory>
#include"BulletManager.h"

class BulletManager;

class Enemy_C :public AbstractEnemy
{
public:
	Enemy_C();
	Enemy_C(float x,float y);
	~Enemy_C();
	void draw()override;

	

private:
	
};

