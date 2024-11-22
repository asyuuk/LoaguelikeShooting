#include "Shot_MovePatternEnemys.h"
#include<DxLib.h>
#include"AbstractEnemyShot.h"

Shot_MovePatternEnemys::Shot_MovePatternEnemys()
{
	Setmovefunctions();
	Setshotfunctions();
	
}

void Shot_MovePatternEnemys::move(AbstractEnemyShot* shot)
{
	const unsigned int movepattern = *shot->movepattern;
	
	(this->*_movepattern[movepattern])(shot);
	
}
void Shot_MovePatternEnemys::shot(AbstractEnemyShot* shot)
{
	const unsigned int shotpattern = *shot->Shotpattern;
	(this->*_shotpattern[shotpattern])(shot);
}

void Shot_MovePatternEnemys::Setmovefunctions()
{
	_movepattern.push_back(&Shot_MovePatternEnemys::MovePattern01);
	_movepattern.push_back(&Shot_MovePatternEnemys::MovePattern02);
	_movepattern.push_back(&Shot_MovePatternEnemys::MovePattern03);
}

void Shot_MovePatternEnemys::Setshotfunctions()
{
	_shotpattern.push_back(&Shot_MovePatternEnemys::Circle);
	_shotpattern.push_back(&Shot_MovePatternEnemys::Random);
	_shotpattern.push_back(&Shot_MovePatternEnemys::Toward);
}

void Shot_MovePatternEnemys::MovePattern01(AbstractEnemyShot* shot)
{
	*shot->_y += 1;
	
}
void Shot_MovePatternEnemys::MovePattern02(AbstractEnemyShot* shot)
{
	if (60 > shot->count[*shot->countpattern]){
		*shot->_y += 1;
	}
	else if (shot->count[*shot->countpattern] >= 120)
	{
		*shot->_x += 1;
		*shot->_y += 0;
	}
}
void Shot_MovePatternEnemys::MovePattern03(AbstractEnemyShot* shot)
{
	*shot->_y += 3;
}

void Shot_MovePatternEnemys::Circle(AbstractEnemyShot* shot)
{
	const int countid = *shot->countpattern;
	if (0 == countid)
	{
		shot->count[countid];
	}
	if (*shot->initflag == false)
	{

		*shot->gamecount2 = *shot->gamecount;
		for (int i = 0; i < 20; i++)
		{
			shot->angle[i] = (18 * i) * DX_PI / 180;
			shot->angle[i + 20] = (18 * i) * DX_PI / 180;
			shot->angle2[i] = ((18 * i) + 4) * DX_PI / 180;
			shot->angle2[i + 20] = ((18 * i) - 4) * DX_PI / 180;

		}
		*shot->initflag=true;
	}

	
	if (*shot->initflag == true&&shot->count[countid]>=60)
	{
		for (int i = 0; i < *shot->max; i++)
		{
			if (shot->count[countid] == 60) {
				shot->_sx[i] = *shot->_x+23;
				shot->_sy[i] = *shot->_y+20;
			}
			
			if (shot->_sx[i]<800 && shot->_sx[i]>-800 && shot->_sy[i]<800 && shot->_sy[i]>-800)
			{
				shot->_sx[i] += cos(shot->angle[i % 40]) * 1;
				shot->_sy[i] += sin(shot->angle[i % 40]) * 1;
			}
			else
			{
				shot->_sx[i] += cos(shot->angle2[i % 40]) * 1;
				shot->_sy[i] += sin(shot->angle2[i % 40]) * 1;
			}
		}
		if (*shot->gamecount == *shot->gamecount2 + 80 && *shot->initflag == true)
		{
			if (*shot->max < 280) {
				*shot->max += 40;
				*shot->gamecount2 += 80;
			}



		}
	}



}

void Shot_MovePatternEnemys::Random(AbstractEnemyShot* shot)
{
	if (*shot->initflag == false) {
		for (int i = 0; i < 2000; i++)
		{
			shot->angle[i] = ((rand() % 360) * (DX_PI / 180));
		}
		for (int i = 0; i < 2000; i++)
		{
			shot->var[i] = (rand() % 5) + 6;
		}
		*shot->initflag = true;
	}
	if (*shot->initflag == true)
	{
		for (int i = 0; i < *shot->max; i++)
		{

			shot->_sx[i] += (cos(shot->angle[i]) * (shot->var[i]) / 2);
			shot->_sy[i] += (sin(shot->angle[i]) * (shot->var[i]) / 2);
		}
		if (shot->gamecount == shot->gamecount2)
		{
			if (*shot->max < 500)
			{
				*shot->max += 40;
				*shot->gamecount2 += 100;

			}
		}
	}

}

void Shot_MovePatternEnemys::Toward(AbstractEnemyShot* shot)
{
	
}