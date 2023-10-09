#include "Object3DBase.h"

void Object3DBase::Draw()
{
	MV1SetPosition(ModelHandle, Pos.GetVECTOR());
	MV1SetRotationXYZ(ModelHandle, Rotate.GetVECTOR());
	MV1SetScale(ModelHandle, Scale.GetVECTOR());
	MV1DrawModel(ModelHandle);
	DrawSphere3D(Pos.GetVECTOR(), 10, 64, GetColor(64, 0, 0), GetColor(64, 0, 0), true);
}