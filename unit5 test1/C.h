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
	C() : C(42) {
		std::cout << "C()" << std::endl;
	}
};