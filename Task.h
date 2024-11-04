#pragma once
//敵やプレイヤーの基礎となる部分。
class Task
{
public:
	Task() = default;
	virtual ~Task() = default;
	virtual bool Update() = 0;
	virtual void draw()const = 0;
	virtual bool updatebullet() = 0;
	virtual void drawbullet() = 0;
};

