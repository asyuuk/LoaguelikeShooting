#include "GameScene.h"
#include"EnemyManager.h"
#include"CircleCollider.h"
#include"Enemy_A.h"
Player p;
EnemyManager EM;



BackGround background;
GameScene::GameScene()
{
	
}

void GameScene::update()
{

	
}

void GameScene::draw()
{
	background.draw();

	EM.update();
	p.update();
	
	
	
	EM.draw();
	EM.Bulletdraw();

	background.drawback();
}