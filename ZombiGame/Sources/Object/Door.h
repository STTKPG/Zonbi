#ifndef DOOR_H
#define DOOR_H

#include "Object3DBase.h"

class Door : public Object3DBase
{
public:
	Door(int modelhundle, Vector pos, Vector rotate, Vector scale) :Object3DBase(ObjectKind::Door, modelhundle, pos, rotate, scale){}
	~Door(){}

protected:
	void Update()override;

};

#endif // !DOOR_H
