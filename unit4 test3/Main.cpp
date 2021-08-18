#include <iostream>
#include <array>
#include "Circle.h"

int main() {
	std::array<Circle, 10>a1{1.0,2.0,3.0,4.0,5.0};
	for (auto i = 5; i < 10; i++) {
		a1[i] = Circle();
	}
	double sum = 0;
	for (auto i : a1) {
		sum += i.getArea();
	}
	std::cout << sum;
	return (0);
}