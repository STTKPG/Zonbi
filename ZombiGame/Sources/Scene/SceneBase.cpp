#include "SceneBase.h"

SceneBase::SceneKind SceneBase::Update()
{
	ObjectManager::Instance()->Update();
	return SceneKind::Title;
}

void SceneBase::Draw()
{
	ObjectManager::Instance()->Draw();
}