#ifndef TEXTBASE_H
#define TEXTBASE_H

#include "Object2DBase.h"

class TextBase : public Object2DBase
{
public:
	TextBase(Position2D top,Position2D under) : Object2DBase(top,under)
	{
	}
	~TextBase()
	{
	}

protected:
	void Update()override;
	void Draw();

private:

};

#endif // !TEXTBASE_H
