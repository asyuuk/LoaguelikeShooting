#include "AbstractBullets.h"
#include"ShotPatternEnemys.h"

AbstractBullets::AbstractBullets()
    : count(std::make_unique<int>(30)),
    angle(std::make_unique<float[]>(2560)),
    angle2(std::make_unique<float[]>(2560)),
    bullet(std::make_unique<int[]>(2560)),
    _x(std::make_unique<float[]>(2560)),
    _y(std::make_unique<float[]>(2560)),
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
    var(std::make_unique<float[]>(2560)),
    x(std::make_unique<float>(_x)),
    y(std::make_unique<float>(_y)),
    visible(std::make_unique<bool>(true)),
    _angle1(std::make_unique<float>(0)),
    _angle2(std::make_unique<float>(0)),
    patternb(std::make_unique<int>(0)),
    _speed(std::make_unique<float>(0)),
    Bhandle(std::make_unique<int>(0)),
    bulletpattern(std::make_unique<int>(0)),
    counterbullet(std::make_unique<int>(0)),
    selection(std::make_unique<int>(0)),
    shotflag(std::make_unique<bool>(false))
     {
    for (int i = 0; i < 2560; i++) {
        _x[i] = -10;
        _y[i] = -10;
    }
    _shot = std::make_shared<ShotPatternEnemys>();
}

bool AbstractBullets::update()
{
   
    return true;
}

