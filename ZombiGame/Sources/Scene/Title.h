#ifndef TITLE_H
#define TITLE_H

#include "SceneBase.h"
#include "../"
class Title : public SceneBase
{
public:
	Title()
	{
		
	}
	~Title(){}

protected:
	SceneKind Update();
	void Draw();
};

#endif // !TITLE_H
