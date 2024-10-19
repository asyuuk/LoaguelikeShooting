#pragma once

#include<memory>
#include"player.h"

class Player;


class CircleCollider
{
public:
	CircleCollider();
	virtual ~CircleCollider() = default;

	
	bool Colliders(float _x,float _y,float _x2,float _y2);

	bool BulletsColliders(float _x, float _y, float _x2[], float _y2[]);

	bool Player_EnemyA_update(float x,float y,float ex,float ey);
	bool Player_Bullet_update(float x, float y, float ex[], float ey[]);
	

	bool Player_Bullet_update_Random();

	

private:
	std::unique_ptr<float>_x1;
	std::unique_ptr<float>_y1;
	std::unique_ptr<float>_x1_1;
	std::unique_ptr<float>_y1_2;
	std::unique_ptr<float[]>_bx;
	std::unique_ptr<float[]>_by;

	Enemy_A Flag;
};

