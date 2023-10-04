#ifndef O_WALL_H
#define O_WALL_H

#include "Object3DBase.h"

class Wall : public Object3DBase
{
public:
	Wall(int modelhundle,Vector pos,Vector rotate):Object3DBase(ObjectKind::Wall,modelhundle,pos,rotate){}
	~Wall(){}

protected:
	void Update()override;
	
};

#endif // !O_WALL_H
