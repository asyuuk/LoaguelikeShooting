#include "AbstractBullets.h"

AbstractBullets::AbstractBullets()
    : count(std::make_unique<int>(30)),
    _x(std::make_unique<int[]>(2560)),
    _y(std::make_unique<int[]>(2560)),
    angle(std::make_unique<float[]>(2560)),
    angle2(std::make_unique<float[]>(2560)),
   
    max(std::make_unique<int>(30)),
    handle(std::make_unique<int>(0)),
    gamecount2(std::make_unique<int>(20)),
    gamecount(std::make_unique<int>(0)),
    in(std::make_unique<int>(20)),
    countgame(std::make_unique<int>(20)),
    counter(std::make_unique<int>(0)),
    playerX(std::make_unique<float>(0)),
    playerY(std::make_unique<float>(0)),
    EnemyX(std::make_unique<float>(0)),
    EnemyY(std::make_unique<float>(0)),
    countgame2(std::make_unique<int>(20)),
    var(std::make_unique<float[]>(2560))
     {
    for (int i = 0; i < 2560; i++) {
        _x[i] = 0;
        _y[i] = 0;
    }
   
}

AbstractBullets::AbstractBullets(int x,int y)
    : count(std::make_unique<int>(20)),
    angle(std::make_unique<float[]>(2560)),
    angle2(std::make_unique<float[]>(2560)),
    _x(std::make_unique<int[]>(2560)),
    _y(std::make_unique<int[]>(2560)),
    count1(std::make_unique<int>(200)),
    max(std::make_unique<int>(100)),
    handle(std::make_unique<int>(0)),
    gamecount2(std::make_unique<int>(20)),
    gamecount(std::make_unique<int>(0)),
    in(std::make_unique<int>(20)),
    countgame(std::make_unique<int>(20)),
    counter(std::make_unique<int>(10)),
    playerX(std::make_unique<float>(0)),
    playerY(std::make_unique<float>(0)),
    EnemyX(std::make_unique<float>(0)),
    EnemyY(std::make_unique<float>(0)),
    countgame2(std::make_unique<int>(20)),
    var(std::make_unique<float[]>(2560)),
    patternb(std::make_unique<int>(0)),
    x(std::make_unique<float>(0)),
    y(std::make_unique<float>(0)),
    _angle1(std::make_unique<float[]>(2560)),
    _angle2(std::make_unique<float[]>(2560)),
    _speed(std::make_unique<float>(2))


{
    for (int i = 0; i < 2560; i++) {
        _x[i] = 0;
        _y[i] = -0;
    }
    shot=std::make_shared<ShotPatternEnemys>();
}

bool AbstractBullets::update()
{ 
    
    shot->shot(this);
    return true;
}



