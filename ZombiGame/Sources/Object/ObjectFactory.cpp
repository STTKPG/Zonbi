#include "ObjectFactory.h"

Player* ObjectFactory::CreatePlayer(int modelhandle, Vector pos, Vector rotate)
{
	return new Player(ObjectBase::ObjectKind::Player, modelhandle, pos, rotate);
}