#ifndef TESTSCENE_H
#define TESTSCENE_H

#include "SceneBase.h"
#include "../Others/GraphManager.h"
#include "../Object/ObjectManager.h"
#include "../Others/ModelManager.h"
#include "../Camera/CameraManager.h"
#include "../Others/DefineInstantVariable.h"

class Test : public SceneBase
{
public:
	Test()
	{
		ModelManager::Instance()->Entry("ReSources/3D/Character_Hazmat.mv1", ObjectBase::ObjectKind::Player);
		ModelManager::Instance()->Entry("ReSources/3D/Floor_Standard.mv1",ObjectBase::ObjectKind::Floor);
		ModelManager::Instance()->Entry("ReSources/3D/Wall_Standard.mv1", ObjectBase::ObjectKind::Wall);
		ModelManager::Instance()->Entry("ReSources/3D/Door.mv1", ObjectBase::ObjectKind::Door);
		ModelManager::Instance()->Entry("ReSources/3D/Wall_Arch.mv1", ObjectBase::ObjectKind::Wall_Arch);
		ModelManager::Instance()->Entry("ReSources/3D/Door.mv1", ObjectBase::ObjectKind::Arch_Door);

		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Floor, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Floor), Vector(0, 0, 0), Vector(0, 0, 0));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Floor, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Floor), Vector(200, 0, 200), Vector(0, 0, 0));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Floor, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Floor), Vector(200, 0, 0), Vector(0, 0, 0));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Floor, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Floor), Vector(0, 0, 200), Vector(0, 0, 0));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Floor, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Floor), Vector(400, 0, 0), Vector(0, 0, 0));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Floor, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Floor), Vector(400, 0, 200), Vector(0, 0, 0));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Floor, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Floor), Vector(600, 0, 0), Vector(0, 0, 0));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Floor, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Floor), Vector(600, 0, 200), Vector(0, 0, 0));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Floor, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Floor), Vector(800, 0, 0), Vector(0, 0, 0));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Floor, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Floor), Vector(800, 0, 200), Vector(0, 0, 0));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Floor, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Floor), Vector(1000, 0, 0), Vector(0, 0, 0));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Floor, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Floor), Vector(1000, 0, 200), Vector(0, 0, 0));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Floor, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Floor), Vector(1200, 0, 0), Vector(0, 0, 0));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Floor, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Floor), Vector(1200, 0, 200), Vector(0, 0, 0));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Floor, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Floor), Vector(0, 0, -200), Vector(0, 0, 0));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Floor, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Floor), Vector(0, 0, 400), Vector(0, 0, 0));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Floor, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Floor), Vector(600, 0, -200), Vector(0, 0, 0));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Floor, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Floor), Vector(600, 0, 400), Vector(0, 0, 0));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Floor, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Floor), Vector(1200, 0, -200), Vector(0, 0, 0));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Floor, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Floor), Vector(1200, 0, 400), Vector(0, 0, 0));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Floor, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Floor), Vector(0, 0, -400), Vector(0, 0, 0));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Floor, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Floor), Vector(0, 0, 600), Vector(0, 0, 0));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Floor, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Floor), Vector(600, 0, -400), Vector(0, 0, 0));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Floor, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Floor), Vector(600, 0, 600), Vector(0, 0, 0));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Floor, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Floor), Vector(1200, 0, -400), Vector(0, 0, 0));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Floor, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Floor), Vector(1200, 0, 600), Vector(0, 0, 0));

		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Floor, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Floor), Vector(200, 0, -400), Vector(0, 0, 0));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Floor, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Floor), Vector(200, 0, 600), Vector(0, 0, 0));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Floor, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Floor), Vector(400, 0, -400), Vector(0, 0, 0));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Floor, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Floor), Vector(400, 0, 600), Vector(0, 0, 0));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Floor, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Floor), Vector(800, 0, -400), Vector(0, 0, 0));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Floor, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Floor), Vector(800, 0, 600), Vector(0, 0, 0));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Floor, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Floor), Vector(1000, 0, -400), Vector(0, 0, 0));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Floor, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Floor), Vector(1000, 0, 600), Vector(0, 0, 0));

		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Wall, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Wall), Vector(-100, 0, 0), Vector(0, HalfRotate, 0));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Wall, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Wall), Vector(-100, 0, 200), Vector(0, HalfRotate, 0));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Wall, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Wall), Vector(-100, 0, -200), Vector(0, HalfRotate, 0));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Wall, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Wall), Vector(-100, 0, 400), Vector(0, HalfRotate, 0));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Wall, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Wall), Vector(-100, 0, -400), Vector(0, HalfRotate, 0));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Wall, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Wall), Vector(-100, 0, 600), Vector(0, HalfRotate, 0));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Wall, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Wall), Vector(1300, 0, 0), Vector(0, HalfRotate, 0));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Wall, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Wall), Vector(1300, 0, 200), Vector(0, HalfRotate, 0));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Wall, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Wall), Vector(1300, 0, -200), Vector(0, HalfRotate, 0));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Wall, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Wall), Vector(1300, 0, 400), Vector(0, HalfRotate, 0));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Wall, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Wall), Vector(1300, 0, -400), Vector(0, HalfRotate, 0));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Wall, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Wall), Vector(1300, 0, 600), Vector(0, HalfRotate, 0));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Wall, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Wall), Vector(0, 0, 700), Vector(0, 0, 0));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Wall, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Wall), Vector(200, 0, 700), Vector(0, 0, 0));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Wall, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Wall), Vector(400, 0, 700), Vector(0, 0, 0));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Wall, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Wall), Vector(600, 0, 700), Vector(0, 0, 0));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Wall, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Wall), Vector(800, 0, 700), Vector(0, 0, 0));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Wall, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Wall), Vector(1000, 0, 700), Vector(0, 0, 0));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Wall, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Wall), Vector(1200, 0, 700), Vector(0, 0, 0));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Wall, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Wall), Vector(0, 0, -500), Vector(0, 0, 0));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Wall, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Wall), Vector(200, 0, -500), Vector(0, 0, 0));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Wall, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Wall), Vector(400, 0, -500), Vector(0, 0, 0));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Wall, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Wall), Vector(600, 0, -500), Vector(0, 0, 0));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Wall, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Wall), Vector(800, 0, -500), Vector(0, 0, 0));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Wall, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Wall), Vector(1000, 0, -500), Vector(0, 0, 0));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Wall, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Wall), Vector(1200, 0, -500), Vector(0, 0, 0));

		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Player, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Player), Vector(0, 0, 0), Vector(0, 0, 0));
	
		CameraManager::Instance()->Entry(Vector(0, 400,200), true);
		CameraManager::Instance()->Entry(Vector(1000,400,0), true);

	}
	~Test(){}

protected:
	SceneKind Update()override;

};

#endif // !TESTSCENE_H
