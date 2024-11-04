#include "SystemMain.h"
#include<DxLib.h>

bool SystemMain::initialize() const
{
	SetAlwaysRunFlag(TRUE);
	SetWindowSizeChangeEnableFlag(TRUE);
	SetFullScreenResolutionMode(DX_FSRESOLUTIONMODE_DESKTOP);
	SetWindowText("!");
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

void SystemMain::main()const
{
	while (!ScreenFlip() && !ProcessMessage() && !ClearDrawScreen())
	{
		if(CheckHitKey(KEY_INPUT_Z))
		break;
	}
}