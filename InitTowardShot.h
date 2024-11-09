#pragma once

#include<memory>

#include"AbstractBullets.h"

class InitTowardShot:public AbstractBullets
{
public:
	InitTowardShot();
	virtual ~InitTowardShot() = default;
	
	void draw()const override;

	
};

