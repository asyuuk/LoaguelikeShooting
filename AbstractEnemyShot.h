#pragma once
#include"Task.h"
#include<memory>
#include"Shot_MovePatternEnemys.h"

class Shot_MovePatternEnemys;

class AbstractEnemyShot :public Task
{
public:
	AbstractEnemyShot(float x,float y);
	virtual ~AbstractEnemyShot() = default;
	bool update()override;
	bool updateshot();

	int Getmovepattern()
	{
		return *movepattern;
	}
	int Getshotpattern()
	{
		return *Shotpattern;
	}

	bool visiblearea();

public:
	std::shared_ptr<Shot_MovePatternEnemys>_shotmove;
	//enemy x,y
	std::unique_ptr<float>_x;
	std::unique_ptr<float>_y;
	//shot x,y
	std::unique_ptr<float[]>_sx;
	std::unique_ptr<float[]>_sy;
	//counter
	std::unique_ptr<int>gamecount;//���ݐi�s�`�ő����Q�[���̃^�C�}�[�|�W�V����
	std::unique_ptr<int>gamecount2;//�G���h�A�����܂ŗ�����܂��C���N�������g������B
	//visible
	std::unique_ptr<bool>initflag;//�e�̏����̏������I�����H
	std::unique_ptr<bool>visible;//�G�̉���
	//handle
	std::unique_ptr<int>shothandle;//�e�̃O���t�n���h��
	std::unique_ptr<int>handle;//�G�̃O���t�n���h��
	//angle
	std::unique_ptr<float[]>angle;
	std::unique_ptr<float[]>angle2;

	//pattern:�V���b�g�Ɠ����̃p�^�[��
	std::unique_ptr<int>Shotpattern;
	std::unique_ptr<int>movepattern;
	std::unique_ptr<int>countpattern;

	//var
	std::unique_ptr<float[]>var;

	//max
	std::unique_ptr<int>max;

	//count�Q�[���̃J�E���g
	std::unique_ptr<int[]>count;
};

