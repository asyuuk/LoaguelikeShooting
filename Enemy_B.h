#pragma once
#include"AbstractEnemy.h"
#include<memory>

#include"BulletManager.h"

class BulletManager;

class Enemy_B :public AbstractEnemy
{
public:
	Enemy_B();
	Enemy_B(float x,float y);
	~Enemy_B();
	void draw()override;


	
private:
	
};

