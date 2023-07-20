#ifndef OBJECTFACTORY_H
#define OBJECTFACTORY_H

#include "GoDeepLogo.h"
#include "../Sources/Others/Position2D.h"

class ObjectFactory
{
public:
	static ObjectFactory* Instance()
	{
		ObjectFactory instance;
		return &instance;
	}
public:
	ObjectBase* CreateGoDeepLogo(Position2D top,Position2D under,ObjectBase::ObjectKind kind)
	{
		return new GoDeepLogo(top, under, kind);
	}

	

public:
	~ObjectFactory(){}

private:
	ObjectFactory() {}
	ObjectFactory(const ObjectFactory& ins) = delete;
};
#endif // !OBJECTFACTORY_H
