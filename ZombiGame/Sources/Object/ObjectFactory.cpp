#include "ObjectFactory.h"
#include "Floor.h"
#include "O_Wall.h"
#include "Door.h"
#include "O_Wall_Arch.h"
#include "Arch_Door.h"

Player* ObjectFactory::CreatePlayer(int modelhandle, Vector pos, Vector rotate, Vector scale)
{
	return new Player(modelhandle, pos, rotate, scale);
}

Object3DBase* ObjectFactory::CreateThings(ObjectBase::ObjectKind kind, int modelhandle, Vector pos, Vector rotate, Vector scale)
{
	switch (kind)
	{
	case ObjectBase::ObjectKind::Floor:
		return new Floor(modelhandle, pos, rotate, scale);
		break;

	case ObjectBase::ObjectKind::Wall:
		return new Wall(modelhandle, pos, rotate, scale);
		break;

	case ObjectBase::ObjectKind::Door:
		return new Door(modelhandle, pos, rotate, scale);
		break;
	case ObjectBase::ObjectKind::Wall_Arch:
		return new Wall_Arch(modelhandle, pos, rotate, scale);
		break;
	case ObjectBase::ObjectKind::Arch_Door:
		return new Arch_Door(modelhandle, pos, rotate, scale);
		break;
	default:
		break;
	}
}