#include "BulletManager.h"
#include"RandamShot.h"
#include"CircleShot.h"
#include"MovePatternEnemys.h"
#include"InitTowardShot.h"
#include"Hormingbullet.h"
#include"Player.h"


Player playerupdate;
Hormingbullet horming;
MovePatternEnemys moveE;
RandamShot randomshot;
CircleShot circleshot;
InitTowardShot towardshot;

BulletManager::BulletManager()
{
	selection = std::make_unique<int>(0);
	SetPattern();
}
void BulletManager::shot(AbstractEnemy* enemy)
{
	const unsigned int pattern = enemy->GetSelection();

	(this->*_shotpattern[pattern])(enemy);
}

void BulletManager::SetPattern()
{
	_shotpattern.push_back(&BulletManager::BulletSelect);
	
}
void BulletManager::BulletSelect(AbstractEnemy* enemy)
{
	
	int count = enemy->Getcount();
	int select =enemy->GetSelection();
	switch (select)
	{
	case Random:
			
			if (count > 100) {
				playerupdate.update();
				randomshot.Initialize(playerupdate.GetX(),playerupdate.GetY(),enemy->GetX(), enemy->GetY());
				randomshot.update(playerupdate.GetX(),playerupdate.GetY(), enemy->GetX(), enemy->GetY());
			}
			
		
		break;

	case Circle:
		if (count > 100) {
			playerupdate.update();
			circleshot.Initialize(playerupdate.GetX(),playerupdate.GetY(),enemy->GetX(), enemy->GetY());
			circleshot.update(playerupdate.GetX(),playerupdate.GetY(), enemy->GetX(), enemy->GetY());
		}
		break;
	case Toward:
		if (count > 100)
		{
			playerupdate.update();
			towardshot.Initialize(playerupdate.GetX(),playerupdate.GetY(),enemy->GetX(), enemy->GetY());
			towardshot.update(playerupdate.GetX(),playerupdate.GetY(), enemy->GetX(), enemy->GetY());
		}
		break;
	case Horming:
		if (count > 100)
		{
			playerupdate.update();
			horming.Initialize(playerupdate.GetX(),playerupdate.GetY(),enemy->GetX(), enemy->GetY());
			horming.update(playerupdate.GetX(),playerupdate.GetY(), enemy->GetX(), enemy->GetY());
		}
		break;
	default:
		break;
	}
}

void BulletManager::BulletDraw(AbstractEnemy*enemy)
{
	int select = enemy->GetSelection();
	const int count = enemy->Getcount();
	switch (select)
	{
	case Random:
		if (100 < count < 130) {
			randomshot.Draw();
		}
		
		break;

	case Circle:
		circleshot.Draw();
		break;
	case Toward:
		if (100 < count)
		{
			towardshot.Draw();
		}
	case Horming:
		if (100 < count)
		{
			horming.Draw();
		}

	default:
		break;
	}
}

