#include "SystemMain.h"
#include<DxLib.h>
#include"GameScene.h"

bool SystemMain::initialize()const
{
	ChangeWindowMode(TRUE);
	if (DxLib_Init())
	{
		return false;
	}
	SetDrawScreen(DX_SCREEN_BACK);
	return true;
}

void SystemMain::finalize()const
{
	DxLib_End();
}



