#ifndef SCENEBASE_H
#define SCENEBASE_H

#include "../Sources/Others/GraphManager.h"
#include "../Sources/Object/ObjectManager.h"

class SceneBase
{
public:
	enum class SceneKind
	{
		Title
	};

public:
	SceneBase() 
	{
		//�K�v�ȉ摜�A���f���f�[�^�̓ǂݍ��݂�������
	}
	virtual ~SceneBase(){}

public:
	//�eObject�̃A�b�v�f�[�g����
	virtual SceneKind Update();
	//�eObject�̕`�����
	virtual void Draw();
};

#endif // !SCENEBASE_H
