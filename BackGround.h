#pragma once
#include"Task.h"
#include<memory>
class BackGround 
{
public:
	
	BackGround();
	virtual ~BackGround();
	void draw() ;
	void drawback();
	bool update();
	float& GetX() { return *_x; }
	float& GetY() { return *_y; }
	float& SetX(float x) { *_x = x; }
	float& SetY(float y) { *_y = y; }
private:
	std::unique_ptr<float>_x;
	std::unique_ptr<float>_y;
	std::unique_ptr<int>handle;
	std::unique_ptr<int>handlemake;
	std::unique_ptr<int>width;
	std::unique_ptr<int>height;
};

