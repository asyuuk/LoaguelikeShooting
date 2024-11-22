#pragma once
#include"AbstractEnemy.h"

class Enemy_A final :public AbstractEnemy
{
public:
	Enemy_A();
	Enemy_A(float _x,float _y);
	~Enemy_A()=default;

	void draw()const override;
	
private:

	

};

