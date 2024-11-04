#include<DxLib.h>
#include"SystemMain.h"

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	SystemMain systemmain;
	if (systemmain.initialize())
	{
		systemmain.main();
	}
	systemmain.finalize();
}