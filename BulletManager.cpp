#include "BulletManager.h"
#include"RandamShot.h"
#include"CircleShot.h"

RandamShot randomshot;
CircleShot circleshot;
BulletManager::BulletManager()
{
	selection = std::make_unique<int>(0);
}


void BulletManager::BulletSelect(int _selection)
{
	set(_selection);
	int select = GetSelection();
	switch (select)
	{
	case Random:
		enemy_abullet.update();
		randomshot.Initialize(enemy_abullet.GetX(), enemy_abullet.GetY());
		randomshot.update(enemy_abullet.GetX(),enemy_abullet.GetY());
		break;

	case Circle:
		enemy_abullet.update();
		circleshot.Initialize(enemy_abullet.GetX(), enemy_abullet.GetY());
		circleshot.update(enemy_abullet.GetX(), enemy_abullet.GetY());
		break;
	default:
		break;
	}
}

void BulletManager::BulletDraw(int _selection)
{
	set(_selection);
	int select = GetSelection();
	switch (select)
	{
	case Random:
		randomshot.Draw();
		break;

	case Circle:
		circleshot.Draw();
		break;
	default:
		break;
	}
}
