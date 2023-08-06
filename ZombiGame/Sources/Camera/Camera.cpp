#include "Camera.h"
#include "../Object/ObjectManager.h"

void Camera::Update()
{
	Vector PlayerPos = ObjectManager::Instance()->GetPlayerPos();
	float Direction = (Pos - PlayerPos).Direction();

	Camera_Player_Direction = Direction;
}

void Camera::SetCamera()
{
	SetCameraPositionAndTargetAndUpVec(Pos.GetVECTOR(), ObjectManager::Instance()->GetPlayerPos().GetVECTOR(), VGet(0, 1, 0));
}