#pragma once
#include"Player.h"
#include<memory>
#include"CircleCollider.h"
#include"EnemyManager.h"
#include"ShotManager.h"
#include"BackGround.h"
class GameScene
{
public:
	GameScene();
	virtual ~GameScene() = default;
	void update();
	void draw();
private:
	
	std::shared_ptr<Player> p;
	std::shared_ptr<EnemyManager>EM;
	std::shared_ptr<BackGround> background;
	std::shared_ptr<ShotManager> Shot;
};

