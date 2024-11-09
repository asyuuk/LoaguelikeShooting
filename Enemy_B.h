#pragma once
#include"AbstractEnemy.h"
#include<memory>





class Enemy_B final :public AbstractEnemy
{
public:
	Enemy_B();
	Enemy_B(float x,float y);
	~Enemy_B()=default;
	void draw()const override;
	

	
private:
	
};

