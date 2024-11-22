#pragma once

#include"Enemy_A.h"
#include"AbstractBullets.h"

#include<memory>



class CircleShot :public AbstractBullets 
{
public:
	CircleShot();
	virtual ~CircleShot() = default;
	
	void draw()const override;
	

private:

};

