#include <iostream>
#include <array>
#include "Circle.h"

Circle::Circle() : radius { 1.0 }{}

Circle::Circle(double radius) {
	this->radius = radius;
}
double Circle::getArea() {
	return (3.14 * radius * radius);
}