#include "ObjectManager.h"
#include "ObjectFactory.h"

void ObjectManager::Entry(ObjectBase::ObjectKind kind, int modelhandle, Vector pos, Vector rotate)
{
	switch (kind)
	{
	case ObjectBase::ObjectKind::Player:
		PlayerIns = ObjectFactory::CreatePlayer(modelhandle, pos, rotate);
		Objects.push_back(PlayerIns);
		break;
	case ObjectBase::ObjectKind::Floor:
		Objects.push_back(ObjectFactory::CreateThings(kind, modelhandle, pos, rotate));
		break;
	case ObjectBase::ObjectKind::Wall:
		Objects.push_back(ObjectFactory::CreateThings(kind, modelhandle, pos, rotate));
		break;
	}
}

void ObjectManager::Update()
{
	for (ObjectBase* Obj : Objects)
	{
		Obj->Update();
	}
}

void ObjectManager::Draw()
{
	for (ObjectBase* Obj : Objects)
	{
		Obj->Draw();
	}
}

void ObjectManager::Delete()
{
	for (ObjectBase* Obj : Objects)
	{
		delete Obj;
	}

	Objects.clear();
}