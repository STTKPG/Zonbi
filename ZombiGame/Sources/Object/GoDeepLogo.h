#ifndef GODEEPLOGO_H
#define GODEEPLOGO_H

#include "Object2DBase.h"

class GoDeepLogo : public Object2DBase
{
public:
	GoDeepLogo(Position2D top,Position2D under) : Object2DBase(top,under){}
	~GoDeepLogo(){}

protected:
	void Update();
	void Draw(int handle);

};


#endif // !GODEEPLOGO_H
