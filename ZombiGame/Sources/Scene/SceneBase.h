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
		//必要な画像、モデルデータの読み込みをここで
	}
	virtual ~SceneBase(){}

public:
	//各Objectのアップデートを回す
	virtual SceneKind Update() = 0;
	//各Objectの描画を回す
	virtual void Draw();
};

#endif // !SCENEBASE_H
