#pragma once
#include<vector>
#include<memory>

class abstractEnemy;
//敵の動く処理をそれぞれ書いていく、パターンを幾つか作る。
class EnemyMove
{
public:
	EnemyMove();
	virtual ~EnemyMove() = default;
	void move(abstractEnemy* enemy);

private:
	typedef void(EnemyMove::* FUNC)(abstractEnemy* enemy);
	std::vector<FUNC> _movePattern;
	void setFunction();

	void movePattern00(abstractEnemy* enemy);
	void movePattern01(abstractEnemy* enemy);
	void movePattern02(abstractEnemy* enemy);
};

