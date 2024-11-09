#include "GameScene.h"
#include"EnemyManager.h"
#include"CircleCollider.h"
#include"ShotManager.h"


GameScene::GameScene()
{
	EM = std::make_shared<EnemyManager>();
	p = std::make_shared<Player>();
	background = std::make_shared<BackGround>();
	Shot = std::make_shared<ShotManager>();
}

void GameScene::update()
{

	
}

void GameScene::draw()
{
	background->draw();

	EM->update();
	p->update();
	Shot->update();
	
	
	EM->draw();
	Shot->draw();

	background->drawback();
}