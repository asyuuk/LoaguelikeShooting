#pragma once

#include"AbstractEnemy.h"
#include<memory>
#include<vector>

class AbstractEnemy;
class BulletManager
{
public:
	BulletManager();
	~BulletManager() = default;

	void set(int x) {
		*selection = x;
	}
	void shot(AbstractEnemy* enemy);

	void BulletSelect(AbstractEnemy* enemy);

	void BulletDraw(AbstractEnemy* enemy);




private:

	void SetPattern();
	typedef void(BulletManager::* FUNC)(AbstractEnemy* enemy);
	std::unique_ptr<int> selection;
	std::vector<FUNC>_shotpattern;
	

};

enum
{
	Random,
	Circle,
	Toward,
	Horming,
	Shot_End
};
