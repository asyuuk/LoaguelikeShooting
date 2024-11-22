#pragma once
#include"Task.h"
#include<memory>
#include"Shot_MovePatternEnemys.h"

class Shot_MovePatternEnemys;

class AbstractEnemyShot :public Task
{
public:
	AbstractEnemyShot(float x,float y);
	virtual ~AbstractEnemyShot() = default;
	bool update()override;
	bool updateshot();

	int Getmovepattern()
	{
		return *movepattern;
	}
	int Getshotpattern()
	{
		return *Shotpattern;
	}

	bool visiblearea();

public:
	std::shared_ptr<Shot_MovePatternEnemys>_shotmove;
	//enemy x,y
	std::unique_ptr<float>_x;
	std::unique_ptr<float>_y;
	//shot x,y
	std::unique_ptr<float[]>_sx;
	std::unique_ptr<float[]>_sy;
	//counter
	std::unique_ptr<int>gamecount;//現在進行形で続くゲームのタイマーポジション
	std::unique_ptr<int>gamecount2;//エンド、ここまで来たらまたインクリメントをする。
	//visible
	std::unique_ptr<bool>initflag;//弾の処理の初期化終了か？
	std::unique_ptr<bool>visible;//敵の可視化
	//handle
	std::unique_ptr<int>shothandle;//弾のグラフハンドル
	std::unique_ptr<int>handle;//敵のグラフハンドル
	//angle
	std::unique_ptr<float[]>angle;
	std::unique_ptr<float[]>angle2;

	//pattern:ショットと動きのパターン
	std::unique_ptr<int>Shotpattern;
	std::unique_ptr<int>movepattern;
	std::unique_ptr<int>countpattern;

	//var
	std::unique_ptr<float[]>var;

	//max
	std::unique_ptr<int>max;

	//countゲームのカウント
	std::unique_ptr<int[]>count;
};

