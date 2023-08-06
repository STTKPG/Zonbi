#ifndef VECTOR_H
#define VECTOR_H

#include "DxLib.h"
#include <math.h>

class Vector
{
private:
	float X;
	float Y;
	float Z;

public:
	Vector(float x,float y,float z) : X(x),Y(y),Z(z){}
	~Vector(){}
	VECTOR GetVECTOR()
	{
		return VGet(X, Y, Z);
	}

public:
	Vector operator + (const Vector& r) const
	{
		return Vector(this->X + r.X,
			          this->Y + r.Y,
			          this->Z + r.Z);
	}
	Vector operator - (const Vector& r) const
	{
		return Vector(this->X - r.X,
			          this->Y - r.Y,
			          this->Z - r.Z);
	}
	Vector operator * (const Vector& r) const
	{
		return Vector(this->X * r.X,
			          this->Y * r.Y,
			          this->Z * r.Z);
	}
	Vector operator / (const Vector& r) const
	{
		return Vector(this->X / r.X,
			          this->Y / r.Y,
			          this->Z / r.Z);
	}
	Vector& operator = (const Vector& r)
	{
		this->X = r.X;
		this->Y = r.Y;
		this->Z = r.Z;

		return *this;
	}

	Vector& operator += (Vector r)
	{
		this->X += r.X;
		this->Y += r.Y;
		this->Z += r.Z;

		return *this;
	}
	Vector& operator -= (Vector r)
	{
		this->X -= r.X;
		this->Y -= r.Y;
		this->Z -= r.Z;

		return *this;
	}


	float Direction()
	{
		float direction = sqrtf(this->X * this->X + this->Y * this->Y + this->Z * this->Z);
		return direction;
	}
	void Scale(float multiple)
	{
		this->X = this->X * multiple;
		this->Y = this->Y * multiple;
		this->Z = this->Z * multiple;
	}
};

#endif // !VECTOR_H
