#pragma once
class Task_B
{
public:
	Task_B() = default;
	virtual ~Task_B() = default;
	virtual bool Initialize(float px,float py,float _x, float _y) = 0;
	virtual bool update(float px,float py,float _x, float _y) = 0;
	virtual void Draw() = 0;
	
};