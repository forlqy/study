#include <iostream>
#include "Circle2.h"
using namespace std;


Circle::Circle() {
	radius = 1.0;
}
Circle::Circle(double radius_) {
	radius = radius_;
}
double Circle::getArea() {
	return (3.14 * radius * radius);
}

double Circle::getRadius() const {//const�������ʾΪ�����������ı䵱ǰ�����״̬��û��ȥ�޸����ݳ�Ա�Ĵ���
	//radius = 1.0;
	return radius;
}

void Circle::setRadius(double radius) {
	this->radius = radius;
}