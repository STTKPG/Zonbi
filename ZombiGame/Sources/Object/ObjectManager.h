#ifndef OBJECTMANAGER_H
#define OBJECTMANAGER_H

#include <list>
#include "ObjectBase.h"
#include "Player.h"
#include "../Others/Vector.h"

class ObjectManager
{
public:
	static ObjectManager* Instance()
	{
		static ObjectManager instance;
		return &instance;
	}

	void Entry(ObjectBase::ObjectKind kind, int modelhandle, Vector pos, Vector rotate, Vector scale);
	void Update();
	void Draw();
	void Delete();
public:
	~ObjectManager() {}
	Vector GetPlayerPos()
	{
		if (PlayerIns == nullptr)
		{
			return Vector(0, 0, 0);
		}
		return PlayerIns->Pos;
	}

private:
	ObjectManager() : PlayerIns(nullptr){}
	ObjectManager(const ObjectManager& ins) = delete;

private:
	std::list<ObjectBase*> Objects;
	Player* PlayerIns;
};

#endif // !OBJECTMANAGER_H