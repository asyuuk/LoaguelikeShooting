#include<DxLib.h>
#include"SystemMain.h"
#include"GameScene.h"
#include<memory>



std::unique_ptr<GameScene> game=std::make_unique<GameScene>();

#define _CRTDBG_MAP_ALLOC

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	std::unique_ptr<SystemMain> system=std::make_unique<SystemMain>();
	if (system->initialize())
	{
		system->main();
	}
	
	system->finalize();
	
	
}