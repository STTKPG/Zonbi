#include "Object3DBase.h"

void Object3DBase::Draw()
{
	MV1SetPosition(ModelHandle, Pos.GetVECTOR());
	MV1DrawModel(ModelHandle);
}