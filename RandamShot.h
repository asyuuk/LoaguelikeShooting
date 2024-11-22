#pragma once

#include<memory>

#include"AbstractBullets.h"

class Enemy_A;



class RandamShot :public AbstractBullets
{
public:
	RandamShot();
	virtual ~RandamShot();
	
	void draw()const override;
	
	
private:
	

};

