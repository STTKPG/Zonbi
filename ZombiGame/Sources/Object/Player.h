#ifndef PLAYER_H
#define PLAYER_H

#include "Object3DBase.h"

class Player : public Object3DBase
{
public:
	Player(int modelhandle, Vector pos, Vector rotate, Vector scale) : Object3DBase(ObjectKind::Player, modelhandle, pos, rotate, scale), DegreeY(0){}
	~Player(){}

protected:
	void Update()override;
	void Draw()override;


private:
	int DegreeY;
};

#endif // !PLAYER_H
