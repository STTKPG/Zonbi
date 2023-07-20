#ifndef SCENEFACTORY_H
#define SCENEFACTORY_H

#include "SceneBase.h"
#include "Title.h"
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
		default:
			break;
		}
		return nullptr;
	}

};

#endif // !SCENEFACTORY_H
