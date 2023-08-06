#ifndef TITLE_H
#define TITLE_H

#include "SceneBase.h"
#include "../Others/ModelManager.h"
class Title : public SceneBase
{
public:
	Title()
	{
	}
	~Title(){}

protected:
	SceneKind Update()override;
};

#endif // !TITLE_H
