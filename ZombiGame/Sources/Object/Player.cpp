#include "Player.h"

void Player::Update()
{
	float Rad = -DegreeY * DX_PI / 180;

	Rotate = Vector(0, Rad, 0);

	Vector MoveVec(-sinf(Rad), 0, -cosf(Rad));
	MoveVec.Scale(10);


	if (DegreeY < 0)
	{
		DegreeY = 360;
	}
	if (DegreeY > 360)
	{
		DegreeY = 0;
	}

	if (CheckHitKey(KEY_INPUT_W) == 1)
	{
		Pos += MoveVec;
	}
	if (CheckHitKey(KEY_INPUT_S) == 1)
	{
		Pos -= MoveVec;
	}
	if (CheckHitKey(KEY_INPUT_A) == 1)
	{
		DegreeY++;
	}
	if (CheckHitKey(KEY_INPUT_D) == 1)
	{
		DegreeY--;
	}

}

void Player::Draw()
{
	MV1SetRotationXYZ(ModelHandle, Rotate.GetVECTOR());
	MV1SetPosition(ModelHandle, Pos.GetVECTOR());
	MV1DrawModel(ModelHandle);
	MV1DrawFrame(ModelHandle, 41);
}