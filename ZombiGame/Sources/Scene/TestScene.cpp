#include "TestScene.h"

SceneBase::SceneKind Test::Update()
{
	ObjectManager::Instance()->Update();
	CameraManager::Instance()->Update();
	return SceneKind::Test;
}
