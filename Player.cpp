#include "Player.h"
#include<DxLib.h>

CircleCollider PCol;
Player::Player()
{
	_x = std::make_unique<float>();
	_y = std::make_unique<float>();
	handle = std::make_unique<int>();

	*_x = 0;
	*_y = 0;
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

void  Player::draw()
{

	*handle = LoadGraph("E:\\Aseprite\\bluearchiveyuuka.png");
	if (PCol.Player_EnemyA_update()) {
		DrawGraph(*_x, *_y, *handle, TRUE);
	}
	
}

void Player::move()
{
	if (CheckHitKey(KEY_INPUT_W))
	{
		*_y -= 2;
	}
	if (CheckHitKey(KEY_INPUT_S))
	{
		*_y += 2;
	}
	if (CheckHitKey(KEY_INPUT_D))
	{
		*_x += 2;
	}
	if (CheckHitKey(KEY_INPUT_A))
	{
		*_x -= 2;
	}
}