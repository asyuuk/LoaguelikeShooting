#pragma once

#include<memory>

#include"AbstractBullets.h"




class Hormingbullet:public AbstractBullets
{
public:
	Hormingbullet();
	virtual ~Hormingbullet() = default;
	
	void draw()const override;
	
private:
	
	

};

