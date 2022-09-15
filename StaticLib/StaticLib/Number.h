#pragma once
#include <iostream>
#include <cmath>
namespace sl {
	class Number;

	class Number
	{
	private:
		double value;
	public:
		//const

		//destructor
		~Number();
		//constructors
		Number();
		Number(double);
		Number(const Number&);
		//Arithmetic operators

		//Compound assignment
		Number& operator += (Number&);
		Number& operator -= (Number&);
		Number& operator /= (Number&);
		Number& operator *= (Number&);
		void setValue(double);
		double getValue();
		friend std::ostream& operator << (std::ostream&, const Number&);
		friend std::istream& operator >> (std::istream&, Number&);
	};
	Number operator + (Number, Number);
	Number operator - (Number, Number);
	Number operator / (Number, Number);
	Number operator * (Number, Number);
	Number sqrt(Number);
	Number valueOf(double);
	Number atan2(Number, Number);
	static const Number One(1);
	static const Number Zero(0);
}

