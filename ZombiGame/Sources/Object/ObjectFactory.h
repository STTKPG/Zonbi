#ifndef OBJECTFACTORY_H
#define OBJECTFACTORY_H

#include "Player.h"

class ObjectFactory
{
public:
	static Player* CreatePlayer(int modelhandle, Vector pos, Vector rotate);
	static Object3DBase* CreateThings(ObjectBase::ObjectKind kind, int modelhandle, Vector pos, Vector rotate);
};

#endif // !OBJECTFACTORY_H
