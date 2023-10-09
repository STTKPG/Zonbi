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
		ModelManager::Instance()->Entry("ReSources/3D/Arch_Door.mv1", ObjectBase::ObjectKind::Arch_Door);

		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Floor, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Floor), Vector(100, 0, 100),       Vector(0, 0, 0), Vector(2, 2, 2));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Floor, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Floor), Vector(500, 0, 100),   Vector(0, 0, 0), Vector(2, 2, 2));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Floor, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Floor), Vector(900, 0, 100), Vector(0, 0, 0), Vector(2, 2, 2));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Floor, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Floor), Vector(1300, 0, 100), Vector(0, 0, 0), Vector(2, 2, 2));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Floor, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Floor), Vector(100, 0, -300), Vector(0, 0, 0), Vector(2, 2, 2));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Floor, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Floor), Vector(500, 0, -300), Vector(0, 0, 0), Vector(2, 2, 2));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Floor, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Floor), Vector(900, 0, -300), Vector(0, 0, 0), Vector(2, 2, 2));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Floor, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Floor), Vector(1300, 0, -300), Vector(0, 0, 0), Vector(2, 2, 2));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Floor, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Floor), Vector(100, 0, 500), Vector(0, 0, 0), Vector(2, 2, 2));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Floor, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Floor), Vector(500, 0, 500), Vector(0, 0, 0), Vector(2, 2, 2));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Floor, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Floor), Vector(900, 0, 500), Vector(0, 0, 0), Vector(2, 2, 2));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Floor, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Floor), Vector(1300, 0,500), Vector(0, 0, 0), Vector(2, 2, 2));

		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Wall, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Wall), Vector(-100, 0, 500),  Vector(0, HalfRotate, 0), Vector(2, 2, 2));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Wall, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Wall), Vector(-100, 0, -300), Vector(0, HalfRotate, 0), Vector(2, 2, 2));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Wall, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Wall), Vector(1500, 0, 500),  Vector(0, HalfRotate, 0), Vector(2, 2, 2));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Wall, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Wall), Vector(1500, 0, -300), Vector(0, HalfRotate, 0), Vector(2, 2, 2));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Wall, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Wall), Vector(100, 0, 700),  Vector(0, 0, 0),          Vector(2, 2, 2));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Wall, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Wall), Vector(500, 0, 700),  Vector(0, 0, 0),          Vector(2, 2, 2));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Wall, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Wall), Vector(900, 0, 700),  Vector(0, 0, 0),          Vector(2, 2, 2));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Wall, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Wall), Vector(1300, 0, 700), Vector(0, 0, 0),          Vector(2, 2, 2));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Wall, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Wall), Vector(100, 0, -500), Vector(0, 0, 0),          Vector(2, 2, 2));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Wall, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Wall), Vector(500, 0, -500), Vector(0, 0, 0),          Vector(2, 2, 2));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Wall, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Wall), Vector(900, 0, -500), Vector(0, 0, 0),          Vector(2, 2, 2));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Wall, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Wall), Vector(1300, 0, -500),Vector(0, 0, 0),          Vector(2, 2, 2));
		
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Wall_Arch, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Wall_Arch), Vector(-100, 0, 100), Vector(0, HalfRotate, 0), Vector(1,1,1));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Arch_Door, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Arch_Door), Vector(-100, 0, 100), Vector(0, HalfRotate, 0), Vector(1, 1, 1));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Door,      ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Door),      Vector(-100, 0, 100), Vector(0, HalfRotate, 0), Vector(1, 1, 1));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Wall_Arch, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Wall_Arch), Vector(1500, 0, 100), Vector(0, HalfRotate, 0), Vector(1, 1, 1));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Arch_Door, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Arch_Door), Vector(1500, 0, 100), Vector(0, HalfRotate, 0), Vector(1, 1, 1));
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Door, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Door),           Vector(1500, 0, 100), Vector(0, HalfRotate, 0), Vector(1, 1, 1));

		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::Player, ModelManager::Instance()->GetModelData(ObjectBase::ObjectKind::Player), Vector(0, 0, 0), Vector(0, 0, 0), Vector(1, 1, 1));
	
		CameraManager::Instance()->Entry(Vector(0, 400,200), true);
		CameraManager::Instance()->Entry(Vector(1300,400,0), true);

	}
	~Test(){}

protected:
	SceneKind Update()override;

};

#endif // !TESTSCENE_H
