#ifndef OBJECTBASEGRAPH_H
#define OBJECTBASEGRAPH_H

#include "ObjectBase.h"
#include "../Sources/Others/GraphManager.h"
#include "../Sources/Others/Position2D.h"
class ObjectBaseGraph : public ObjectBase
{
public:
	ObjectBaseGraph(ObjectBase::ObjectKind kind,Position2D top, Position2D under) :ObjectBase(kind), Top(top), Under(under) {}
	~ObjectBaseGraph() {}

public:
	virtual void Update() = 0;
	virtual void Draw()
	{
	}
public:
	Position2D Top;
	Position2D Under;
};

#endif // !OBJECTGRAPHBASE_H