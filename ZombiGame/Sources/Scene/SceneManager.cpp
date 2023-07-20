#include "SceneManager.h"
#include "SceneFactory.h"

void SceneManager::SceneEntry()
{
	if (Scene == nullptr)
	{
		Scene = SceneFactory::SceneCreate(CurrentSceneKind);
	}
}

SceneBase::SceneKind SceneManager::SceneUpdate()
{
	return Scene->Update();
}

void SceneManager::SceneDraw()
{
	Scene->Draw();
}

void SceneManager::SceneDelete(SceneBase::SceneKind kind)
{
	if (kind != CurrentSceneKind)
	{
		delete Scene;
		Scene = nullptr;
	}
}