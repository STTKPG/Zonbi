#ifndef TITLE_H
#define TITLE_H

#include "SceneBase.h"

class Title : public SceneBase
{
public:
	Title(){}
	~Title(){}

protected:
	SceneKind Update();
	void Draw();
};

#endif // !TITLE_H
