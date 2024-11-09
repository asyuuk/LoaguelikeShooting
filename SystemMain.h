#pragma once
#include<memory>
#include"GameScene.h"

class SystemMain final
{
public:
	SystemMain();
	~SystemMain() = default;
	bool initialize()const;
	void finalize() const;
	void main()const ;
private:
	std::unique_ptr<int>handle;
	std::shared_ptr<GameScene> gamescene;
};

