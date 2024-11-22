#pragma once
#include"AbstractEnemy.h"



class Enemy_C final :public AbstractEnemy
{
public:

	Enemy_C(float x,float y);
	~Enemy_C()=default;
	void draw()const override;

	

private:

};

