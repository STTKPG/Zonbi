#include "Object2DBase.h"
#include "DxLib.h"

void Object2DBase::Update()
{
	
}

void Object2DBase::Draw(int handle)
{
	DrawExtendGraph(Top.X, Top.Y, Under.X, Under.Y, handle, true);
}