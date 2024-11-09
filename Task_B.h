#pragma once


class Task_B
{
public:
	Task_B() = default;
	virtual ~Task_B() = default;
	virtual void draw()const = 0;
	virtual bool update()=0;
	
};