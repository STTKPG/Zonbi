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
		//必要な画像、モデルデータの読み込みをここで
	}
	virtual ~SceneBase(){}

public:
	//各Objectのアップデートを回す
	virtual SceneKind Update();
	//各Objectの描画を回す
	virtual void Draw();
};

#endif // !SCENEBASE_H
