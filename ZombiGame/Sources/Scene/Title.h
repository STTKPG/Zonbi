#ifndef TITLE_H
#define TITLE_H

#include "SceneBase.h"
#include "../Sources/Others/GraphManager.h"
#include "../Sources/Object/ObjectManager.h"
class Title : public SceneBase
{
public:
	Title()
	{
		GraphManager::Instance()->Entry("ReSource/2D/GoDeepLogo.png",ObjectBase::ObjectKind::GoDeepLogo);
		ObjectManager::Instance()->Entry(ObjectBase::ObjectKind::GoDeepLogo, Position2D(300, 300), Position2D(400, 400));
	}
	~Title(){}

protected:

};

#endif // !TITLE_H
