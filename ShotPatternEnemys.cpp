#include "ShotPatternEnemys.h"
#include<DxLib.h>
#include"EnemyManager.h"


ShotPatternEnemys::ShotPatternEnemys()
{
	_player = std::make_shared<Player>();
	_em = std::make_shared<EnemyManager>();

	SetFunction();
}

void ShotPatternEnemys::shot(AbstractBullets* bullets)
{
	const unsigned int pattern = bullets->GetPatternB();
	(this->*_bullet[pattern])(bullets);
	bullets->SetX(bullets->Get_X(2560) + cos(bullets->Getangle1(2560)) * bullets->Getspeed());
	bullets->SetY(bullets->Get_Y(2560) + sin(bullets->Getangle1(2560)) * bullets->Getspeed());
	
	
}

void ShotPatternEnemys::SetFunction()
{
	_bullet.push_back(&ShotPatternEnemys::Circle);
	_bullet.push_back(&ShotPatternEnemys::Random);
	_bullet.push_back(&ShotPatternEnemys::Horming);
}




void ShotPatternEnemys::Circle(AbstractBullets* bullets)
{
	
	_em->update();
	_player->update();
	bullets->Setmax(40);
	for (int i = 0; i < bullets->Getcount1(); i++)
	{
		bullets->angle[i] = (18 * i) * DX_PI / 180;
		bullets->angle[i + bullets->Getcount1()] = (18 * i) * DX_PI / 180;
		bullets->angle2[i] = ((18 * i) + 4) * DX_PI / 180;
		bullets->angle2[i + bullets->Getcount1()] = ((18 * i) - 4) * DX_PI / 180;

	}
	

	for (int i = 0; i < bullets->Getmax(); i++)
	{
		if (bullets->_x[i]<80 && bullets->_x[i]>-80 && bullets->_y[i]<80 && bullets->_y[i]>-80)
		{
			bullets->_x[i] += cos(bullets->angle[i % 40]) * 2;
			bullets->_y[i] += sin(bullets->angle[i % 40]) * 2;
		}
		else
		{
			bullets->_x[i] += cos(bullets->angle2[i % 40]) * 2;
			bullets->_y[i] += sin(bullets->angle2[i % 40]) * 2;
		}
	}
	if (bullets->countgame == bullets->countgame2)
	{
		if (bullets->Getmax() < 280) {
			bullets->Setmax(bullets->Getmax() + 20);
			bullets->SetCountgame2(bullets->GetCountgame2() + 20);
		}




	}
	bullets->SetCountgame(bullets->GetCountgame());
	

}

void ShotPatternEnemys::Random(AbstractBullets* bullets)
{
	
	_player->update();
	for (int i = 0; i < 2000; i++)
	{
		bullets->_x[i] = bullets->GetX();
		bullets->_y[i] = bullets->GetY();
	}
	for (int i = 0; i < 2000; i++)
	{
		bullets->angle[i] = ((rand() % 360) * (DX_PI / 180));
	}
	for (int i = 0; i < 2000; i++)
	{
		bullets->var[i] = (rand() % 5) + 6;
	}

	for (int i = 0; i < bullets->Getmax(); i++)
	{

		bullets->_x[i] += (cos(bullets->angle[i]) * bullets->var[i]) / 3;
		bullets->_y[i] += (sin(bullets->angle[i]) * bullets->var[i]) / 3;
	}
	if (bullets->countgame == bullets->countgame2)
	{
		if (bullets->Getmax() < 500)
		{
			bullets->Setmax(bullets->Getmax() + 40);
			bullets->SetCountgame2(bullets->GetCountgame2()+100);

		}
	}

}

void ShotPatternEnemys::Toward(AbstractBullets* bullets)
{
	
	_player->update();
	bullets->Setmax(20);
	for (int i = 0; i < bullets->Getcount(); i++)
	{
		bullets->angle[i] = (25 * i) * DX_PI / 180;
		bullets->angle[i + bullets->Getcount()] = ((10 * i) + 4) * DX_PI / 180;
		bullets->angle2[i] = (25 * i) * DX_PI / 180;
		bullets->angle2[i + bullets->Getcount()] = ((10 * i) - 4) * DX_PI / 180;
	}
	for (int i = 0; i < 300; i++)
	{
		bullets->_x[i] = bullets->GetX();
		bullets->_y[i] = bullets->GetY();


	}
	for (int i = 0; i < bullets->Getmax(); i++)
	{

		if (bullets->Getcount() < 20)
		{
			bullets->_x[i] += (float)cos(bullets->angle[i % 40]) * 4;
			bullets->_y[i] += (float)sin(bullets->angle2[i % 40]) * 4;


		}

		if (20 < bullets->Getcounter())
		{

			if (20 < bullets->Getcounter() < 30) {
				bullets->angle[0] = atan2((double)(_player->GetY() - bullets->Get_Y(bullets->Getmax())), (double)(_player->GetX() - bullets->Get_X(bullets->Getmax())));

				bullets->_x[0] += (float)(cos(bullets->angle[0]) * 4.0);
				bullets->_y[0] += (float)(sin(bullets->angle2[0]) * 4.0);


			}

			if (i > 0)
			{
				bullets->angle[i] = atan2((double)(bullets->_y[i - 1] - bullets->_y[i]), (double)(bullets->_x[i - 1] - bullets->_x[i]));
				bullets->_x[i] += (float)(cos(bullets->angle[i]) * 4.0);
				bullets->_y[i] += (float)(sin(bullets->angle2[i]) * 4.0);
			}
		}
		if (bullets->GetCountgame() == bullets->GetCountgame2())
		{
			if (bullets->Getmax() < 300)
			{

				bullets->Setmax(bullets->Getmax() + 20);
				bullets->SetCountgame(bullets->GetCountgame() + 20);
			}
		}


	}

	bullets->Setcounter(bullets->Getcounter() + 1);
	bullets->SetCountgame(bullets->GetCountgame() + 1);


}

void ShotPatternEnemys::Horming(AbstractBullets* bullets)
{
//Setmax(20);
//for (int i = 0; i < 2560; i++)
//{
//	angle[i] = 0;
//	angle2[i] = 0;
//	_x[i] = x;
//	_y[i] = y;
//}
//for (int i = 0; i < Getmax(); i++)
//{
//
//	if (0 < *counter)
//	{
//
//		angle[0] = atan2((double)(py - y), (double)(px - x));
//		_x[0] += (float)(cos(angle[0]) * 1.0);
//		_y[0] += (float)(sin(angle[0]) * 1.0);
//		if (i > 0) {
//			angle[i] = atan2((double)(_y[i - 1] - _y[i]), (double)(_x[i - 1] - _x[i]));
//			_x[i] += (float)(cos(angle[i]) * 1);
//			_y[i] += (float)(sin(angle[i]) * 1);
//
//		}
//
//	}
//	if (*countgame == *countgame2)
//	{
//		if (Getmax() < 300)
//		{
//			Setmax(Getmax() + 20);
//			*countgame += 20;
//		}
//	}
//}
//
//
//
}


