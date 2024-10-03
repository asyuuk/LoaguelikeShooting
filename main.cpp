#include<DxLib.h>
#include"SystemMain.h"
#include"GameScene.h"



GameScene game;

#define _CRTDBG_MAP_ALLOC

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	SystemMain system;
	if (system.initialize())
	{
		while (!ScreenFlip() && !ProcessMessage() && !ClearDrawScreen()) {
			game.update();
			game.draw();
		}
	}
	
	system.finalize();
	
	
}