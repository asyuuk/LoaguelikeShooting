#pragma once
#include"Task_G.h"

#include"AbstractEnemy.h"
#include<memory>
#include"player.h"

class Player;
class AbstractEnemy;

class CircleCollider:public Task_G
{
public:
	CircleCollider();
	virtual ~CircleCollider() = default;

	
	bool Colliders(float _x,float _y,float _x2,float _y2);
	bool BulletCollider();
	bool Player_EnemyA_update();
	bool Player_Bullet_update();

	bool Player_Bullet_update_Random();

	

private:
	std::unique_ptr<float>_x1;
	std::unique_ptr<float>_y1;
	std::unique_ptr<float>_x1_1;
	std::unique_ptr<float>_y1_2;

	
};

