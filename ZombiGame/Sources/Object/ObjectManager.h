#ifndef OBJECTMANAGER_H
#define OBJECTMANAGER_H

#include "ObjectFactory.h"
#include <list>
class ObjectManager
{
public:
	static ObjectManager* Instance()
	{
		ObjectManager instance;
		return &instance;
	}

	void Entry(ObjectBase::ObjectKind kind, Position2D top = Position2D(0,0),Position2D under = Position2D(0,0));
	void Update();
	void Draw();
	void Delete();
public:
	~ObjectManager() {}


private:
	ObjectManager() {}
	ObjectManager(const ObjectManager& ins) = delete;

private:
	std::list<ObjectBase*> Objects;
};

#endif // !OBJECTMANAGER_H