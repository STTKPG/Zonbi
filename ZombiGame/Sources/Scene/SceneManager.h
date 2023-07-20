#ifndef SCENEMANAGER_H
#define SCENEMANAGER_H

#include "SceneBase.h"

class SceneManager
{
public:
	static SceneManager* Instance()
	{
		SceneManager instance;
		return &instance;
	}
public:
	~SceneManager(){}

public:
	void SceneEntry();
    SceneBase::SceneKind SceneUpdate();
	void SceneDraw();
	void SceneDelete(SceneBase::SceneKind kind);

private:
	SceneManager() {}
	SceneManager(const SceneManager &ins) = delete;

private:
	SceneBase* Scene;
	SceneBase::SceneKind CurrentSceneKind;
};

#endif // !SCENEMANAGER_H
