#ifndef CAMERAFACTORY_H
#define CAMERAFACTORY_H

#include "Camera.h"

class CameraFactory
{
public:
	static Camera* CreateCamera(Vector pos, bool is_live)
	{
		return new Camera(pos,is_live);
	}
};


#endif // CAMERAFACTORY_H
