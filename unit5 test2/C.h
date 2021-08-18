#pragma once
#include <iostream>
class C {
private:
	int x{ 0 };
public:
	C(int x) {
		this->x = x;
		std::cout << "C(" << x << ")" << std::endl;
	}
	C(double d) : C(static_cast<int>(d)){
		std::cout << "C(" << d << ")" << std::endl;
	}
	C() : C{ 3.8 } {
		std::cout << "C()" << std::endl;
	}
};