#ifndef ARCH_DOOR_H
#define ARCH_DOOR_H

#include "Object3DBase.h"

class Arch_Door : public Object3DBase
{
public:
	Arch_Door(int modelhundle, Vector pos, Vector rotate) :Object3DBase(ObjectKind::Floor, modelhundle, pos, rotate) {}
	~Arch_Door() {}

protected:
	void Update()override;
};

#endif // !ARCH_DOOR_H
