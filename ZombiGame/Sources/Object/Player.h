#ifndef PLAYER_H
#define PLAYER_H

#include "Object3DBase.h"

class Player : public Object3DBase
{
public:
	Player(ObjectBase::ObjectKind kind, int modelhandle, Vector pos, Vector rotate) : Object3DBase(kind, modelhandle, pos, rotate), DegreeY(0){}
	~Player(){}

protected:
	void Update()override;
	void Draw()override;


private:
	int DegreeY;
};

#endif // !PLAYER_H