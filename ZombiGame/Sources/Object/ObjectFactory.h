#ifndef OBJECTFACTORY_H
#define OBJECTFACTORY_H

#include "ObjectBase.h"
#include "GoDeepLogo.h"
class ObjectFactory
{
public:
	static auto* CreateObject(ObjectBase::ObjectKind kind)
	{
		switch (kind)
		{
		case ObjectBase::ObjectKind::GoDeepLogo:
			return new GoDeepLogo(300,);
			break;

		default:
			break;
		}
	}
private:
	Object2DBase*
public:
	~ObjectFactory(){}

private:
	ObjectFactory() {}
	ObjectFactory(const ObjectFactory& ins) = delete;
};
#endif // !OBJECTFACTORY_H
