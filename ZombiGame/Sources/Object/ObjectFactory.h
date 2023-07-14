#ifndef OBJECTFACTORY_H
#define OBJECTFACTORY_H

#include "GoDeepLogo.h"

class ObjectFactory
{
public:
	ObjectFactory* Instance()
	{
		static ObjectFactory instance;
		return &instance;
	}
protected:
	Object2DBase* CreateObject2D(ObjectBase::ObjectKind kind, Position2D top, Position2D under)
	{
		switch (kind)
		{
		case::ObjectBase::ObjectKind::GoDeepLogo:
			return new GoDeepLogo(top, under);
			break;
		}
		return nullptr;
	}

	

public:
	~ObjectFactory(){}

private:
	ObjectFactory() {}
	ObjectFactory(const ObjectFactory& ins) = delete;
};
#endif // !OBJECTFACTORY_H
