#include<iostream>
#include"..\DinamicLib\Vector2D.h"
void testLIB() {
	sl::Number a(4.5), b(2.7);
	std::cout << "Zero = " << sl::Zero << "\nOne = " << sl::One << '\n';
	std::cout << "a = " << a << "\nb = " << b << '\n';
	std::cout << "a + b = " << a + b << '\n';
	std::cout << "a - b = " << a - b << '\n';
	std::cout << "a * b = " << a * b << '\n';
	std::cout << "a / b = " << a / b << '\n';
	double value;
	std::cout << "Please, entere value:\n";
	std::cin >> value;
	std::cout << "Your number = " << sl::valueOf(value) << '\n';
}
void testDLL() {
	dl::Vector2D a(1, 1), b(1, 3);
	std::cout << "Vector Zero = " << dl::Zero << "\nVector One = " << dl::One << '\n';
	std::cout << "Vector a  = " << a << "\nVector b = " << b << "\nVector a + b = " << a + b << '\n';
	std::cout << "Vector in decart = " << b << "\nVector F = " << b.getF() << "\nVector R(radius) = " << b.getR() << '\n';
}
int main() {
	testDLL();
	testLIB();
}