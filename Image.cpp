#include "Image.h"
#include<DxLib.h>

Image::Image()
{
	_player = std::make_unique<int>();
	_enemy_a = std::make_unique<int>();
	_background = std::make_unique<int>();
	*_player = myLoadGraph("E:\\Aseprite\\chara0002.png");
	*_enemy_a = myLoadGraph("E:\\Aseprite\\bluearchiveyuuka.png");
	*_background = myLoadGraph("E:\\Aseprite\\haikei_game.png");

}


int Image::myLoadGraph(const char * filename)
{
	int ret = LoadGraph(filename);
	_image.push_back(ret);
	return ret;
}

void Image::release()
{
	const int size =_image.size();
	for (int i = 0; i < size; i++)
	{
		DeleteGraph(_image[i]);
	}
	_image.clear();
}