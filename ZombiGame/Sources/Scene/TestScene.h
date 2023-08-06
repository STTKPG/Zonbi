#ifndef TESTSCENE_H
#define TESTSCENE_H

#include "SceneBase.h"
#include "../Others/GraphManager.h"
#include "../Object/ObjectManager.h"
#include "../Others/ModelManager.h"
#include "../Camera/CameraManager.h"

class Test : public SceneBase
{
public:
	Test()
	{
		ModelManager::Instance()->Entry("ReSources/3D/Character_Hazmat.mv1", ObjectBase::ObjectKind::Player);
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Player, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Player), Vector(0, 0, 0), Vector(0, 0, 0));
		CameraManager::Instance()->Entry(Vector(-100, 400,0), true);
		CameraManager::Instance()->Entry(Vector(1000,400,0), true);
	}
	~Test(){}

protected:
	SceneKind Update()override;

};

#endif // !TESTSCENE_H
