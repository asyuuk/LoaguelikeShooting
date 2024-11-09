#include "BackGround.h"
#include<DxLib.h>
#include"Image.h"
BackGround::BackGround()
{
	_x = std::make_unique<float>(0);
	_y = std::make_unique<float>(0);
	handle = std::make_unique<int>(0);
	handlemake = std::make_unique<int>(0);
	width = std::make_unique<int>(448);
	height = std::make_unique<int>(384);
	

}
BackGround::~BackGround()
{
	DeleteGraph(*handlemake);
}

bool BackGround::update()
{
	return true;
}


void BackGround::draw()
{
	
	SetDrawArea(0, 0, *width, *height);
	
	

}

void BackGround::drawback()
{
	SetDrawScreen(DX_SCREEN_BACK);
	DrawGraph(*width, 0,Image::GetInst()->getbackground(), FALSE);
	DrawGraph(0, *height, Image::GetInst()->getbackground(), FALSE);
}



