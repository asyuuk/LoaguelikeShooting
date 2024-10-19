#pragma once

#include<memory>
#include"Task.h"

class AbstractBullets:public Task
{
public:
	AbstractBullets();
	virtual ~AbstractBullets() = default;
	bool update()override;
	void draw()override;

	
	void Setmax(int m)
	{
		*max = m;
	}
	int Getmax()
	{
		return *max;
	}
	void Sethandle(int _handle)
	{
		*handle = _handle;
	}
	int Gethandle()
	{
		return *handle;
	}
	void Setcount1(int _count1)
	{
		*count1 = _count1;
	}
	int Getcount1() {
		return *count1;
	}
	void Setcount(int _count)
	{
		*count = _count;
	}
	int Getcount1() {
		return *count;
	}

	void Setgamecount(int _gamecount)
	{
		*gamecount = _gamecount;
	}
	int Getgamecount()
	{
		return *gamecount;
	}
	void Setgamecount2(int _gamecount2)
	{
		*gamecount2 = _gamecount2;
	}
	int Getgamecount2()
	{
		return *gamecount2;
	}
	std::unique_ptr<float[]>angle;
	std::unique_ptr<float[]>angle2;
	std::unique_ptr<int[]>bullet;
	std::unique_ptr<float[]>_x;
	std::unique_ptr<float[]>_y;
	std::unique_ptr<int>in;
	std::unique_ptr<int>countgame;
	std::unique_ptr<int>counter;
	std::unique_ptr<int>handle;
private:
	std::unique_ptr<int>count;
	std::unique_ptr<int>max;
	
	std::unique_ptr<int>gamecount;
	std::unique_ptr<int>gamecount2;
	std::unique_ptr<int>count1;
	

};

