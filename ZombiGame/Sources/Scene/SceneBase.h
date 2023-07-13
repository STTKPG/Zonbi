#ifndef SCENEBASE_H
#define SCENEBASE_H

class SceneBase
{
public:
	enum class SceneKind
	{
		Title
	};

public:
	SceneBase() {}
	virtual ~SceneBase(){}

public:
	virtual SceneKind Update() = 0;
	virtual void Draw() = 0;
};

#endif // !SCENEBASE_H
