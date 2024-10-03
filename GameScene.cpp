#include "GameScene.h"
#include"BulletManager.h"
Player player;
Enemy_A enemyA;
CircleCollider collider;
BulletManager bulletmanager;
BackGround background;
GameScene::GameScene()
{
	
}

void GameScene::update()
{
	player.update();
	
	bulletmanager.BulletSelect(0);
}

void GameScene::draw()
{
	//background.draw();
	player.update();
	player.draw();
	EA.draw();

	bulletmanager.BulletDraw(0);
}