#pragma once

#include<memory>

#include"AbstractBullets.h"

class Enemy_A;



class RandamShot :public AbstractBullets
{
public:
	RandamShot();
	RandamShot(int x, int y);
	virtual ~RandamShot();
	
	void draw()const override;
	
	
private:
	

};

