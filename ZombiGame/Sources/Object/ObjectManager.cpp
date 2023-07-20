#include "ObjectManager.h"

void ObjectManager::Entry(ObjectBase::ObjectKind kind, Position2D top, Position2D under)
{
	switch (kind)
	{
	case::ObjectBase::ObjectKind::GoDeepLogo:
		Objects.push_back(ObjectFactory::Instance()->CreateGoDeepLogo(top, under, kind));
		break;

	default:
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