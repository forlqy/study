#include <iostream>
#include "Circle3.h"
using namespace std;


Circle::Circle() {
	radius = 1.0;
}
Circle::Circle(double radius_) {
	radius = radius_;
}
double Circle::getArea()const {
	return (3.14 * radius * radius);
}

double Circle::getRadius() const {//const放在这表示为常函数，不改变当前对象的状态，没有去修改数据成员的代码
	//radius = 1.0;
	return radius;
}

Circle& Circle::setRadius(double radius) {
	this->radius = radius;
	return (*this);
	//return (Circle{radius});//不加&
}