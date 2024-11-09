#pragma once
#include"AbstractEnemy.h"
#include<memory>
#include"AbstractBullets.h"

class AbstractBullets;


class Enemy_A final :public AbstractEnemy
{
public:
	Enemy_A();
	Enemy_A(float _x,float _y);
	~Enemy_A()=default;

	void draw()const override;
	
private:

	

};

