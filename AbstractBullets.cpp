#include "AbstractBullets.h"

AbstractBullets::AbstractBullets()
{
	count = std::make_unique<int>(30);
	angle = std::make_unique<float[]>(2560);
	angle2 = std::make_unique<float[]>(2560);
	bullet = std::make_unique<int[]>(2560);
	_x = std::make_unique<float[]>(2560);
	_y = std::make_unique<float[]>(2560);
	max = std::make_unique<int>(30);
	handle = std::make_unique<int>(0);
	gamecount2 = std::make_unique<int>(20);
	gamecount = std::make_unique<int>(0);
	in = std::make_unique<int>(20);
	countgame = std::make_unique<int>(20);
	counter = std::make_unique<int>(0);

	for (int i = 0; i < 2560; i++)
	{
		_x[i] = -10;
		_y[i] = -10;
	}
}

bool AbstractBullets::update()
{

}

