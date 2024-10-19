#pragma once
#include"Task_B.h"
#include"Enemy_A.h"
#include"AbstractBullets.h"
#include<memory>
class Enemy_A;
class CircleShot:public Task_B,AbstractBullets
{
public:
	CircleShot();
	virtual ~CircleShot() = default;
	bool Initialize(float px,float py,float _x, float _y)override;
	bool update(float px,float py,float _x, float _y)override;
	void Draw() override;
	

};

