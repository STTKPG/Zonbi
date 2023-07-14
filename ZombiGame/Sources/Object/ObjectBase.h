#ifndef OBJECTBASE_H
#define OBJECTBASE_H

class ObjectBase
{
public:
	enum class ObjectKind
	{
		GoDeepLogo
	};
public:
	ObjectBase(){}
	~ObjectBase(){}

public:
	virtual void Update() = 0;
	virtual void Draw(int handle) = 0;
};

#endif // !OBJECTBASE_H


//作品のアピールポイントを書く。