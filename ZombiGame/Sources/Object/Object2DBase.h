#ifndef OBJECT2DBASE_H
#define OBJECT2DBASE_H

#include "ObjectBase.h"
#include "../Others/Position2D.h"

class Object2DBase : public ObjectBase
{
public:
	Object2DBase(Position2D top,Position2D under):
	Top(top),
	Under(under){}
	~Object2DBase(){}

protected:
	void Update();
	void Draw(int handle)override;

public:
	Position2D Top;
	Position2D Under;


};

#endif // !OBJECT2D_H