#ifndef SCENEFACTORY_H
#define SCENEFACTORY_H

#include "SceneBase.h"
#include "Title.h"
#include "TestScene.h"

class SceneFactory
{
public:

	static SceneBase* SceneCreate(SceneBase::SceneKind kind)
	{
		switch (kind)
		{
		case SceneBase::SceneKind::Title:
			return new Title;
			break;
		case SceneBase::SceneKind::Test:
			return new Test;
			break; 
		default:
			break;
		}
		return nullptr;
	}

};

#endif // !SCENEFACTORY_H
