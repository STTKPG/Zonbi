#ifndef SCENEBASE_H
#define SCENEBASE_H

#include "../Others/GraphManager.h"
#include "../Others/ModelManager.h"
#include "../Object/ObjectManager.h"

class SceneBase
{
public:
	enum class SceneKind
	{
		Title,
		Test
	};

public:
	SceneBase() 
	{
		//�K�v�ȉ摜�A���f���f�[�^�̓ǂݍ��݂�������
	}
	virtual ~SceneBase(){}

public:
	//�eObject�̃A�b�v�f�[�g����
	virtual SceneKind Update() = 0;
	//�eObject�̕`�����
	virtual void Draw();
};

#endif // !SCENEBASE_H
