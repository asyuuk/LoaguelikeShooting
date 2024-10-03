#pragma once
#include"AbstractEnemy.h"
#include<memory>
#include"CircleCollider.h"
class CircleCollider;

class Enemy_A:public AbstractEnemy
{
public:
	Enemy_A();
	virtual ~Enemy_A();
	bool update()override;
	void draw() override;
	void SetFlag(bool flag)
	{
		*shotFlag = flag;
	}
	bool GetFlag()
	{
		return *shotFlag;
	}

	

private:
	std::unique_ptr<bool>shotFlag;
	
};

