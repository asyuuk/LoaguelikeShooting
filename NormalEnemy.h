#pragma once
#include"abstractEnemy.h"
class NormalEnemy final: public abstractEnemy
{
public:
	NormalEnemy(float x, float y);
	~NormalEnemy() = default;
	void draw()const override;
	
protected:
	void SetSize() override;
};

