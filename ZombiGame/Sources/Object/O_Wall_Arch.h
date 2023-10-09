#ifndef WALL_ARCH_H
#define WALL_ARCH_H

#include "Object3DBase.h"

class Wall_Arch : public Object3DBase
{
public:
	Wall_Arch(int modelhundle, Vector pos, Vector rotate, Vector scale):Object3DBase(ObjectKind::Wall_Arch, modelhundle, pos, rotate, scale){}
	~Wall_Arch(){}

protected:
	void Update()override;
};
#endif // !WALL_ARCH_H
