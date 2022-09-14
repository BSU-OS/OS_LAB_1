#pragma once
#include "Vector2D.h"
namespace dl {
	Vector2D::~Vector2D()
	{
	}
	Vector2D::Vector2D() :
		X(),
		Y()
	{
	}

	Vector2D::Vector2D(sl::Number x, sl::Number y) :
		X(x),
		Y(y)
	{
	}

	Vector2D::Vector2D(const Vector2D& vector2D) :
		Vector2D(vector2D.X, vector2D.Y)
	{
	}

	sl::Number Vector2D::getX()const
	{
		return X;
	}

	sl::Number Vector2D::getY()const
	{
		return Y;
	}

	void Vector2D::setX(sl::Number x)
	{
		X = x;
	}

	void Vector2D::setY(sl::Number y)
	{
		Y = y;
	}

	Vector2D& Vector2D::operator+=(Vector2D& vector2D)
	{
		X += vector2D.X;
		Y += vector2D.Y;
		return *this;
	}

	sl::Number Vector2D::getF()const
	{
		return sl::atan2(Y, X);
	}

	sl::Number Vector2D::getR()const
	{
		return sl::sqrt(X * X + Y * Y);
	}
	std::ostream& operator<<(std::ostream& output, const Vector2D& vector2D)
	{
		output << '(' << vector2D.getX() << ';' << vector2D.getY() << ')';
		return output;
	}
	std::istream& operator>>(std::istream& input, Vector2D& vector2D)
	{
		sl::Number x, y;
		input >> x >> y;
		vector2D.setX(x);
		vector2D.setY(y);
		return input;
	}
	Vector2D operator+(Vector2D a, Vector2D b)
	{
		return Vector2D(a.getX()+b.getX(),a.getY()+b.getY());
	}
}