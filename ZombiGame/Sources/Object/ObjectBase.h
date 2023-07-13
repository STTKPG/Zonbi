#ifndef OBJECTBASE_H
#define OBJECTBASE_H

class ObjectBase
{
public:
	ObjectBase(){}
	~ObjectBase(){}

private:
	virtual void Update() = 0;
	virtual void Draw(int handle) = 0;
};

#endif // !OBJECTBASE_H
