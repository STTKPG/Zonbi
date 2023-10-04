#ifndef DOOR_H
#define DOOR_H

#include "Object3DBase.h"

class Door : public Object3DBase
{
public:
	Door(int modelhundle, Vector pos, Vector rotate) :Object3DBase(ObjectKind::Floor, modelhundle, pos, rotate){}
	~Door(){}

protected:
	void Update()override;

};

#endif // !DOOR_H
