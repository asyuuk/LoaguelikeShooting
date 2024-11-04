#pragma once
#include"Task.h"
#include"EnemyMove.h"


//全ての敵の基底クラス、動き等も決める。
class abstractEnemy:public Task
{
public:
	abstractEnemy(float x, float y);
	virtual ~abstractEnemy() = default;
	void initialize();
	bool Update()override;
	
	float getX() const { return _x; }
	void setX(float x) { _x = x; }
	float getY() const { return _y; }
	void setY(float y) { _y = y; }
	int getCounter()const { return _counter; }	
	void setSpeed(float speed) { _speed = speed; }
	float getSpeed()const { return _speed; }
	void setAngle(float angle) { _angle = angle; }
	float getAngle()const { return _angle; }
	int getMovePatternID()const { return _movepatternID; }


protected:
	virtual void SetSize() = 0;
	bool isInside()const;

	EnemyMove _mover;

	float _x, _y;
	float _speed;
	float _angle;

	int _counter;
	int _width;
	int _height;

	int _movepatternID;
};

