#pragma once
#include "Shape.h"

class Circle : public Shape{//类的声明与实现分离只涉及到函数，不涉及到类的数据成员
public:
	Circle();
	Circle(double radius_);
	Circle(double radius_, Color color_, bool filled_);
	double getArea();
	double getRadius() const;
	void setRadius(double radius);

	string toString();
private:
	double radius;
};