#pragma once
#include"AbstractEnemyShot.h"
class ShotEnemy:public AbstractEnemyShot
{
public:
	ShotEnemy(float x, float y);
	~ShotEnemy() = default;
	void draw()const override;
	void drawShot()const;

};

