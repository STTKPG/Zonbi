#include "CameraManager.h"
#include "CameraFactory.h"
void CameraManager::Entry(Vector pos, bool is_live)
{
	CameraList.push_back(CameraFactory::CreateCamera(pos,is_live));
}

void CameraManager::Update()
{
	
	for (auto Itr = CameraList.begin();Itr != CameraList.end();Itr++)
	{
		(*Itr)->Update();
		if (Live_Cam == nullptr)
		{
			Live_Cam = (*Itr);
		}
		else if ((*Itr)->Camera_Player_Direction < Live_Cam->Camera_Player_Direction )
		{
			Live_Cam = (*Itr);
		}
	}

	Live_Cam->SetCamera();
}

void CameraManager::Clear()
{
	for (auto Itr = CameraList.begin(); Itr != CameraList.end(); Itr++)
	{
		delete (*Itr);
	}
	CameraList.clear();
}