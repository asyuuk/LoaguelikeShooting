#pragma once
#include"Task.h"
#include<memory>
#include<vector>
#include"MovePatternEnemys.h"


class MovePatternEnemys;

class AbstractEnemy:public Task
{
public:
	AbstractEnemy();
	AbstractEnemy(int _x,int _y);
	virtual ~AbstractEnemy() = default;

	bool update()override;


	int GetX()
	{
		return *x;
	}
	int GetY()
	{
		return *y;
	}
	void SetX(float _x)
	{
		*x = _x;
	}

	void SetY(float _y)
	{
		*y = _y;
	}
	bool Getvisible(bool flag)
	{
		*visible = flag;
		return *visible;
	}
	int Getcount()
	{
		return *count;
	}

	void Setcount(int _count)
	{
		*count = _count;
	}

	float Getangle1()
	{
		return *_angle1;
	}
	void Setangle1(float angle1)
	{
		*_angle1 = angle1;
	}
	float Getangle2()
	{
		return *_angle2;
	}
	void Setangle2(float angle2)
	{
		*_angle2 = angle2;
	}
	float Getspeed()
	{
		return *_speed;
	}
	const void Setspeed(float  speed)
	{
		*_speed = speed;
	}
	int Getpattern() {
		return *pattern;
	}
	void Setpattern(int _pattern)
	{
		*pattern = _pattern;
	}
	void SetCounterB(int  _counterb)
	{
		*counterbullet = _counterb;
	}
	int GetCounterB()
	{
		return *counterbullet;
	}
	int GetSelection()
	{
		return *selection;
	}
	void SetSelection(int _selection)
	{
		*selection = _selection;
	}
	bool GetFlag()
	{
		return *shotflag;
	}
	void SetFlag(bool flag)
	{
		*shotflag = flag;
	}

protected:
	std::vector<int> _vx;
	std::vector<int> _vy;
	std::unique_ptr<int>x;
	std::unique_ptr<int>y;
	std::unique_ptr<int>_angle1;
	std::unique_ptr<int>_angle2;
	std::unique_ptr<int>_speed;
	std::unique_ptr<int>Bhandle;
	std::unique_ptr<bool>visible;
	std::unique_ptr<int>count;
	std::unique_ptr<int>pattern;
	std::unique_ptr<int>counterbullet;
	std::unique_ptr<int>bulletpattern;
	std::unique_ptr<int>selection;
	std::unique_ptr<bool>shotflag;
	std::unique_ptr<int>handle;

	std::shared_ptr<MovePatternEnemys>move;

};

