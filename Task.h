#pragma once
//�G��v���C���[�̊�b�ƂȂ镔���B
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

