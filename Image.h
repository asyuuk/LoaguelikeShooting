#pragma once
#include"Singleton.h"
#include<memory>
#include<vector>
class Image :public Singleton<Image>
{
public:
	Image();
	~Image() = default;
	void load();
	void release();
	int getPlayer() const { return *_player; }
	int getenemyA() const { return *_enemy_a; }
	int getbackground() const { return *_background; }


private:
	int myLoadGraph(const char*);
	int myLoadDivGraph(char* filename, int n, int xn, int yn, int w, int h, int* buf);
	

	std::vector<int>_image;
	std::unique_ptr<int>_player;
	std::unique_ptr<int>_enemy_a;
	std::unique_ptr<int>_enemy_b;
	std::unique_ptr<int>_enemy_c;
	std::unique_ptr<int>_background;
	std::unique_ptr<int>_handle;
};

