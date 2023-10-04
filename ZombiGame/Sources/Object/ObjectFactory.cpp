#include "ObjectFactory.h"
#include "Floor.h"
#include "O_Wall.h"
#include "Door.h"

Player* ObjectFactory::CreatePlayer(int modelhandle, Vector pos, Vector rotate)
{
	return new Player(modelhandle, pos, rotate);
}

Object3DBase* ObjectFactory::CreateThings(ObjectBase::ObjectKind kind, int modelhandle, Vector pos, Vector rotate)
{
	switch (kind)
	{
	case ObjectBase::ObjectKind::Floor:
		return new Floor(modelhandle, pos, rotate);
		break;

	case ObjectBase::ObjectKind::Wall:
		return new Wall(modelhandle, pos, rotate);
		break;

	case ObjectBase::ObjectKind::Door:
		return new Door(modelhandle, pos, rotate);
		break;

	default:
		break;
	}
}