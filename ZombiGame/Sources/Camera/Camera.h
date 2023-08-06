#ifndef CAMERA_H
#define CAMERA_H

#include "../Others/Vector.h"
#include "../Object/ObjectManager.h"

class Camera
{
public:
	Camera(Vector pos, bool is_live):Pos(pos),Is_Live(is_live),Camera_Player_Direction(0){}
	~Camera(){}

public:
	void Update();
	void SetCamera();

private:
	Vector Pos;
	
public:
	float Camera_Player_Direction;
	bool Is_Live;

};

#endif // !CAMERA_H
