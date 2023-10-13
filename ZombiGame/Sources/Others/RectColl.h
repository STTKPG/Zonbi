#ifndef RECTCOLL_H
#define RECTCOLL_H

#include "Vector.h"

class RectCollider
{
public:
	RectCollider() : Vertex{{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0}} {}
	~RectCollider(){}

public:
	void UpdateCollider(Vector pos);
protected:
	Vector Vertex[8];

#endif // !RECTCOLL_H