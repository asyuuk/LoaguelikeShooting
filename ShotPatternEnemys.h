#pragma once
#include"AbstractBullets.h"
#include<vector>
#include"Player.h"


class Player;


class AbstractBullets;

class ShotPatternEnemys
{
public:
	ShotPatternEnemys();
	virtual ~ShotPatternEnemys() = default;
	void shot(AbstractBullets* bullet);
	void SetFunction();

protected:
	typedef void(ShotPatternEnemys::* FUNC)(AbstractBullets* bullets);

	std::vector<FUNC>_bullet;
	std::shared_ptr<Player>_player;


	void Circle(AbstractBullets* bullets);
	void Random(AbstractBullets* bullets);
	void Toward(AbstractBullets* bullets);
	void Horming(AbstractBullets* bullets);
	void DirectShot(AbstractBullets* bullets);

		
	
	
};

