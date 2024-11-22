#include "GameScene.h"
#include"EnemyManager.h"
#include"CircleCollider.h"
#include"ShotManager.h"


GameScene::GameScene()
{
	EM = std::make_shared<EnemyManager>();
	p = std::make_shared<Player>();
	background = std::make_shared<BackGround>();
	S = std::make_shared<ShotManager>();
	_SM = std::make_shared<Shot_MoveEnemymanager>();
}

void GameScene::update()
{

	
}

void GameScene::draw()
{
	background->draw();
	//_SM->update();
	//EM->update();
	p->update();
	
	//_SM->draw();
	p->draw();
	
	//EM->draw();
	background->drawback();
	
}