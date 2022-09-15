#include "Number.h"
namespace sl {
	Number::~Number()
	{
	}
	Number::Number() :
		Number(0)
	{
	}
	Number::Number(double v) :
		value(v)
	{
	}

	Number::Number(const Number& number) :
		Number(number.value)
	{
	}

	Number operator+(Number a, Number b)
	{
		return Number(a.getValue() + b.getValue());
	}

	Number operator-(Number a, Number b)
	{
		return Number(a.getValue() - b.getValue());
	}

	Number operator/(Number a, Number b)
	{
		return Number(a.getValue() / b.getValue());
	}

	Number operator*(Number a, Number b)
	{
		return Number(a.getValue() * b.getValue());
	}

	bool operator==(Number a, Number b)
	{
		return a.getValue() == b.getValue();
	}

	bool operator!=(Number a, Number b)
	{
		return !(a == b);
	}

	bool operator<(Number a, Number b)
	{
		return a.getValue() < b.getValue();
	}

	bool operator<=(Number a, Number b)
	{
		return a.getValue() <= b.getValue();
	}

	bool operator>(Number a, Number b)
	{
		return !(a <= b);
	}

	bool operator>=(Number a, Number b)
	{
		return !(a < b);
	}

	Number& Number::operator+=(const Number& number)
	{
		value += number.value;
		return *this;
	}

	Number& Number::operator-=(const Number& number)
	{
		value -= number.value;
		return *this;
	}

	Number& Number::operator/=(const Number& number)
	{
		value /= number.value;
		return *this;
	}

	Number& Number::operator*=(const Number& number)
	{
		value *= number.value;
		return *this;
	}

	Number& Number::operator=(const Number& number)
	{
		if (this != &number) {
			value = number.value;
		}
		return *this;
	}

	void Number::setValue(double v)
	{
		value = v;
	}


	double Number::getValue()
	{
		return value;
	}

	std::ostream& operator <<(std::ostream& output, const Number& number)
	{
		output << number.value;
		return output;
	}

	std::istream& operator >>(std::istream& input, Number& number)
	{
		input >> number.value;
		return input;
	}

	Number sqrt(Number number)
	{
		return Number(std::sqrt(number.getValue()));
	}

	Number valueOf(double v)
	{
		return Number(v);
	}
	Number atan2(Number a, Number b)
	{
		return std::atan2(a.getValue(), b.getValue());
	}
}