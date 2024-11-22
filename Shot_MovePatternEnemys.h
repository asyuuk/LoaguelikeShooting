#pragma once
#include<vector>
#include<memory>
#include"AbstractEnemyShot.h"
#include"Task.h"
class AbstractEnemyShot;


class Shot_MovePatternEnemys
{
public:
	Shot_MovePatternEnemys();
	virtual ~Shot_MovePatternEnemys() = default;
	void Setmovefunctions();
	void Setshotfunctions();
	void move(AbstractEnemyShot* shot);
	void shot(AbstractEnemyShot* shot);
protected:

	typedef void (Shot_MovePatternEnemys::* FUNC)(AbstractEnemyShot* shot);
	std::vector<FUNC>_movepattern;
	std::vector<FUNC>_shotpattern;


	void MovePattern01(AbstractEnemyShot* shot);
	void MovePattern02(AbstractEnemyShot* shot);
	void MovePattern03(AbstractEnemyShot* shot);

	void Circle(AbstractEnemyShot* shot);
	void Random(AbstractEnemyShot* shot);
	void Toward(AbstractEnemyShot* shot);
};

