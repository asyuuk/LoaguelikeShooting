#pragma once

#include<memory>
#include"ShotPatternEnemys.h"
#include"Task_B.h"
#include<vector>


class ShotPatternEnemys;


class AbstractBullets:public Task_B
{
public:
	AbstractBullets();
	AbstractBullets(int x, int y);
	virtual ~AbstractBullets() = default;
	bool update()override;
	


	void Set_X(int x, int y)
	{
		for (int i = 0; i < y; i++)
		{
			_x[i] = x;
		}
	}

	int Get_X(int x)
	{
		for (int i = 0; i < x; i++)
		{
			return _x[i];
		}
	}

	void Set_Y(int x, int y)
	{
		for (int i = 0; i < y; i++)
		{
			_y[i] = x;
		}
	}

	int Get_Y(int x)
	{
		for (int i = 0; i < x; i++)
		{
			return _y[i];
		}
	}

	

	

	void Setmax(int x)
	{
		*max = x;
	}
	int Getmax()
	{
		return *max;
	}
	int Getcount1()
	{
		return *count1;

	}
	void Setcount1(int c)
	{
		*count1 = c;
	}
	int Getcount()
	{
		return *count;
	}
	float& GetX()
	{
		return *x;
	}
	float& GetY()
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
	

	void Setcount(int _count)
	{
		*count = _count;
	}

	float Getangle1(int x)
	{
		for(int i=0;i<x;i++)
		return _angle1[i];
	}
	void Setangle1(int angle1,int x)
	{
		for (int i = 0; i < x; i++)
		{
			_angle1[i]=angle1;
		}
	}
	float Getangle2(int x)
	{
		for (int i = 0; i < x; i++)
		{
			return _angle2[i];
		}
	}
	void Setangle2(float angle2,int x)
	{
		for (int i = 0; i < x; i++)
		{
			_angle2[i]=angle2;
		}
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
	int GetPatternB()
	{
		return *patternb;
	}
	void SetPatternB(int b)
	{
		*patternb = b;
	}

	void SetCountgame2(int x)
	{
		*gamecount2 = x;
	}
	int GetCountgame2()
	{
		return *gamecount2;
	}

	void SetCountgame(int x)
	{
		*gamecount = x+1;
	}
	int GetCountgame()
	{
		return *gamecount;
	}

	void Setcounter(int x)
	{
		*counter = x;
	}
	int Getcounter()
	{
		return *counter;
	}

	

	

public:
	std::unique_ptr<int[]>_y;
	std::unique_ptr<int[]>_x;

	std::unique_ptr<float>x;
	std::unique_ptr<float>y;
	std::unique_ptr<float[]>_angle1;
	std::unique_ptr<float[]>_angle2;
	std::unique_ptr<float>_speed;
	std::unique_ptr<int>Bhandle;
	std::unique_ptr<bool>visible;
	std::unique_ptr<int>pattern;
	std::unique_ptr<int>counterbullet;
	std::unique_ptr<int>bulletpattern;
	std::unique_ptr<int>selection;
	std::unique_ptr<bool>shotflag;
	std::unique_ptr<int>handle;
	std::unique_ptr<float[]>angle;
	std::unique_ptr<float[]>angle2;
	std::unique_ptr<float[]>bullet;
	
	std::unique_ptr<int>in;
	std::unique_ptr<int>countgame;
	std::unique_ptr<int>countgame2;
	std::unique_ptr<int>counter;

	std::unique_ptr<float[]>var;
	std::unique_ptr<int>patternb;
	std::unique_ptr<int>count;
	std::unique_ptr<int>max;
	
	std::unique_ptr<int>gamecount;
	std::unique_ptr<int>gamecount2;
	std::unique_ptr<int>count1;
	std::unique_ptr<float>playerX;
	std::unique_ptr<float>playerY;
	std::unique_ptr<float>EnemyX;
	std::unique_ptr<float>EnemyY;

	std::shared_ptr<ShotPatternEnemys>shot;


};


