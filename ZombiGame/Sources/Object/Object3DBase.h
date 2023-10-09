#ifndef OBJECT3DBASE_H
#define OBJECT3DBASE_H

#include "ObjectBase.h"
#include "DxLib.h"
#include "../Others/Vector.h"

class Object3DBase : public ObjectBase
{
public:
	Object3DBase(ObjectBase::ObjectKind kind,int modelhandle,Vector pos,Vector rotate, Vector scale):ObjectBase(kind), ModelHandle(modelhandle), Pos(pos), Rotate(rotate), Scale(scale) {}
	~Object3DBase(){}

public:
	virtual void Update()override = 0;
	void Draw()override;

public:
	Vector Pos;
	Vector Rotate;
	Vector Scale;
	int ModelHandle;
};

#endif // !OBJECT3DBASE_H
