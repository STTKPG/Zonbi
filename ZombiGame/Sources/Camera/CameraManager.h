#ifndef CAMERAMANAGER_H
#define CAMERAMANAGER_H

#include "../\Others/Vector.h"
#include "Camera.h"
#include<list>

class CameraManager
{
public:
	static CameraManager* Instance()
	{
		static CameraManager instance;
		return &instance;
	}

public:
	~CameraManager(){}
	
public:
	void Entry(Vector pos, bool is_live);
	void Update();
	void Clear();

private:
	CameraManager(): Live_Cam(nullptr) {}
	CameraManager(const CameraManager& Ins) = delete;

private:
	std::list<Camera*> CameraList;
	Camera* Live_Cam;
};

#endif // !CAMERAMANAGER_H
