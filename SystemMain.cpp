#include "SystemMain.h"
#include<DxLib.h>
#include"GameScene.h"

SystemMain::SystemMain()
{
	handle = std::make_unique<int>(0);
	gamescene = std::make_shared<GameScene>();
}

bool SystemMain::initialize()const
{
	ChangeWindowMode(TRUE);
	if (DxLib_Init())
	{
		return false;
	}
	
	return true;
}

void SystemMain::finalize()const
{
	DxLib_End();
}

void SystemMain::main()const
{
	while (!ScreenFlip() && !ProcessMessage() && !ClearDrawScreen())
	{
		gamescene->update();
		gamescene->draw();
	}
}



