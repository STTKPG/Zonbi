#ifndef FLOOR_H
#define FLOOR_H

#include "Object3DBase.h"

class Floor : public Object3DBase
{
public:
	Floor(int modelhundle , Vector pos , Vector rotate, Vector scale):Object3DBase(ObjectKind::Floor , modelhundle , pos , rotate, scale){}
	~Floor(){}

protected:
	void Update()override;
};

#endif // !FLOOR_H
