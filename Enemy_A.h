#pragma once
#include"AbstractEnemy.h"
#include<memory>
#include"BulletManager.h"

class BulletManager;

class Enemy_A :public AbstractEnemy
{
public:
	Enemy_A();
	Enemy_A(float x,float y);
	~Enemy_A();

	void draw() override;



	
	

private:


};

