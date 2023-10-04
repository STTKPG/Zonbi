#ifndef OBJECTBASE_H
#define OBJECTBASE_H

class ObjectBase
{
public:
	enum class ObjectKind
	{
		GoDeepLogo,
		Player,
		Wall,
		Floor,
		Door,
		Arch_Door,
		Wall_Arch

	};

public:
	ObjectBase(ObjectKind kind) : 
	Kind(kind){}
	~ObjectBase(){}

public:
	virtual void Update() = 0;
	virtual void Draw() = 0;

public:
	ObjectKind Kind;
};

#endif // !OBJECTBASE_H


//作品のアピールポイントを書く。