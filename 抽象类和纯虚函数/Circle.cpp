#include <iostream>
#include "Circle.h"
using namespace std;


Circle::Circle() {
	radius = 1.0;
}
Circle::Circle(double radius_) {
	radius = radius_;
}
Circle::Circle(double radius_, Color color_, bool filled_) {
	radius = radius_;
	Shape::setColor(color_);
	Shape::setFilled(filled_);
}
double Circle::getArea() {
	return (3.14 * radius * radius);
}

double Circle::getRadius() const {//const放在这表示为常函数，不改变当前对象的状态，没有去修改数据成员的代码
	//radius = 1.0;
	return radius;
}

void Circle::setRadius(double radius) {
	this->radius = radius;
}

string Circle::toString() {
	return ("Circle: radius" + to_string(radius) + ","
		+ colorToString() + " " + filledToString());
}