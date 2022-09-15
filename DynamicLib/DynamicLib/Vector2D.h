#pragma once
#ifdef DYNAMICLIB_EXPORTS
#define DYNAMICLIB_API __declspec(dllexport)
#else
#define DYNAMICLIB_API __declspec(dllimport)
#endif
#include"..\..\StaticLib\StaticLib\Number.h"
namespace dl {
	class DYNAMICLIB_API Vector2D
	{
	private:
		sl::Number X, Y;
	public:
		~Vector2D();
		Vector2D();
		Vector2D(sl::Number, sl::Number);
		Vector2D(const Vector2D&);
		sl::Number getX()const;
		sl::Number getY()const;
		void setX(sl::Number);
		void setY(sl::Number);
		Vector2D& operator +=(Vector2D&);
		sl::Number getF()const;
		sl::Number getR()const;
		DYNAMICLIB_API friend std::ostream& operator << (std::ostream&, const Vector2D&);
		DYNAMICLIB_API friend std::istream& operator >> (std::istream&, Vector2D&);
	};
	DYNAMICLIB_API Vector2D operator + (Vector2D, Vector2D);
	static const Vector2D Zero(0, 0);
	static const Vector2D One(1, 1);
}

