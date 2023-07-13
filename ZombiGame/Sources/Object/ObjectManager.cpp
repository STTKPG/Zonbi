#ifndef OBJECTMANAGER_H
#define OBJECTMANAGER_H

#include "ObjectFactory.h"
#include <list>
class ObjectManager
{
public:
	ObjectManager* Instance()
	{
		return &instance;
	}
	void Entry(ObjectBase::ObjectKind kind)
	{
		ObjectFactory::CreateObject(kind);
	}
public:
	~ObjectManager(){}


private:
	ObjectManager() {}
	ObjectManager(const ObjectManager& ins) = delete;
	static ObjectManager instance;

private:
	std::list<ObjectBase*> Objects;
};

#endif // !OBJECTMANAGER_H