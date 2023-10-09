#ifndef ARCH_DOOR_H
#define ARCH_DOOR_H

#include "Object3DBase.h"

class Arch_Door : public Object3DBase
{
public:
	Arch_Door(int modelhundle, Vector pos, Vector rotate, Vector scale) :Object3DBase(ObjectKind::Arch_Door, modelhundle, pos, rotate, scale) {}
	~Arch_Door() {}

protected:
	void Update()override;
};

#endif // !ARCH_DOOR_H
