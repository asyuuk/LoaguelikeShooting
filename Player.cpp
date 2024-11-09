#include "Player.h"
#include<DxLib.h>
#include"Image.h"



Player::Player()
{
	_x = std::make_unique<float>();
	_y = std::make_unique<float>();
	handle = std::make_unique<int>();
	speed = std::make_unique<float>();
	*_x = 150;
	*_y = 350;
	*speed = 3.0f;
	*handle = 0;
	
}
Player::~Player()
{
	DeleteGraph(*handle);
}

bool Player::update()
{
	move();

	return true;
}

void  Player::draw() const
{
	
	
	DrawGraph(*_x, *_y, Image::GetInst()->getPlayer(), TRUE);
	
	
}



void Player::move()
{
	if (CheckHitKey(KEY_INPUT_W))
	{
		*_y -= *speed;
	}
	if (CheckHitKey(KEY_INPUT_S))
	{
		*_y += *speed;
	}
	if (CheckHitKey(KEY_INPUT_D))
	{
		*_x += *speed;
	}
	if (CheckHitKey(KEY_INPUT_A))
	{
		*_x -= *speed;
	}


}