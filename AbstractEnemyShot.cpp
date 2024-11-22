#include "AbstractEnemyShot.h"

AbstractEnemyShot::AbstractEnemyShot(float x,float y)
{
	_shotmove = std::make_shared<Shot_MovePatternEnemys>();
	//enemy x,y
	_x=std::make_unique<float>(0);
	_y = std::make_unique<float>(0);
	//shot x,y
	_sx = std::make_unique<float[]>(2560);
	_sy = std::make_unique<float[]>(2560);
	//counter
	gamecount = std::make_unique<int>(0);//現在進行形で続くゲームのタイマーポジション
	gamecount2 = std::make_unique<int>(40);//エンド、ここまで来たらまたインクリメントをする。
	//visible
	initflag = std::make_unique<bool>(0);//弾の処理の初期化終了か？
	visible = std::make_unique<bool>(0);//敵の可視化
	//handle
	shothandle = std::make_unique<int>(0);//弾のグラフハンドル
	handle = std::make_unique<int>(0);//敵のグラフハンドル
	//angle
	angle = std::make_unique<float[]>(2560);
	angle2 = std::make_unique<float[]>(2560);
	//pattern
	movepattern = std::make_unique<int>(0);
	Shotpattern = std::make_unique<int>(0);
	countpattern = std::make_unique<int>(0);
	//max
	max = std::make_unique<int>(40);
	//var
	var = std::make_unique<float[]>(2560);
	//count
	count = std::make_unique<int[]>(2560);
}

bool AbstractEnemyShot::update()
{
	_shotmove->move(this);
	for (int i = 0; i < 10; i++)
	{
		count[i]++;
	}

	return visiblearea();
}

bool AbstractEnemyShot::updateshot()
{
	_shotmove->shot(this);
	for (int i = 0; i < 10; i++)
	{
		count[i]++;
	}

	return visiblearea();
}


bool AbstractEnemyShot::visiblearea()
{
	if (*_x > 1000 || *_x<0 || *_y > 1000 || *_y<0)
	{
		return false;
	}
	return true;
}