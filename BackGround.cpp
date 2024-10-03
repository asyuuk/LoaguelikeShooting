#include "BackGround.h"
#include<DxLib.h>
BackGround::BackGround()
{
	_x = std::make_unique<float>(0);
	_y = std::make_unique<float>(0);
	handle = std::make_unique<int>(0);
	handlemake = std::make_unique<int>(0);
}
BackGround::~BackGround()
{
	DeleteGraph(*handle);
}

bool BackGround::update()
{
	return true;
}


void BackGround::draw()
{
	*handle = LoadGraph("E:\\Aseprite\\haikei_game.png");
	*handlemake = MakeScreen(284, 448, FALSE);
	SetDrawScreen(*handlemake);

	DrawGraph(*_x, *_y, *handle, true);
	DrawGraph(32, 16, *handlemake, FALSE);
}
