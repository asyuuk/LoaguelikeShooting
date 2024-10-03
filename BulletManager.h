#pragma once
#include"Player.h"
#include"Enemy_A.h"
#include<memory>
class Player;
class Enemy_A;
class BulletManager
{
public:
	BulletManager();
	~BulletManager() = default;;

	void set(int x) {
		*selection = x;
	}
	int GetSelection() {
		return *selection;
	}

	void BulletSelect(int _selection);

	void BulletDraw(int _selecition);

private:
	std::unique_ptr<int> selection;
	Player playerbullet;
	Enemy_A enemy_abullet;
};

enum
{
	Random,
	Circle,
	Shot_End
};
