#ifndef GODEEPLOGO_H
#define GODEEPLOGO_H

#include "ObjectBaseGraph.h"

class GoDeepLogo : public ObjectBaseGraph 
{
public:
	GoDeepLogo(Position2D top,Position2D under,ObjectKind kind) : ObjectBaseGraph(kind,top,under){}
	~GoDeepLogo(){}

protected:
	void Update();

};


#endif // !GODEEPLOGO_H
