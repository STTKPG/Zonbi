#include "Title.h"

SceneBase::SceneKind Title::Update()
{
	ObjectManager::Instance()->Update();
	return SceneKind::Title;
}
