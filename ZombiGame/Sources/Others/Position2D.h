#ifndef POSITION2D_H
#define POSITION2D_H

struct Position2D
{
	Position2D(int x,int y):
		X(x),
		Y(y)
	{
	}
	Position2D(const Position2D& r)
	{
		this->X = r.X;
		this->Y = r.Y;
	}
	Position2D& operator = (const Position2D& r)
	{
		this->X = r.X;
		this->Y = r.Y;
		return *this;
	}
	Position2D& operator += (const Position2D& r)
	{
		this->X += r.X;
		this->X += r.X;

		return *this;
	}
	Position2D& operator -= (const Position2D& r)
	{
		this->X -= r.X;
		this->X -= r.X;

		return *this;
	}

	Position2D operator + (const Position2D& r)
	{
		return Position2D(this->X + r.X, this->Y + r.Y);
	}

	Position2D operator - (const Position2D& r)
	{
		return Position2D(this->X - r.X, this->Y - r.Y);
	}

	Position2D operator * (const Position2D& r)
	{
		return Position2D(this->X * r.X, this->Y * r.Y);
	}
	
	Position2D operator / (const Position2D& r)
	{
		return Position2D(this->X / r.X, this->Y / r.Y);
	}

	
	int X;
	int Y;
};
#endif // !POSITION2D_H
