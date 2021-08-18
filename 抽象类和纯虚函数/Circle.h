#pragma once
#include "Shape.h"

class Circle : public Shape {//类的声明与实现分离只涉及到函数，不涉及到类的数据成员
public:
	Circle();
	Circle(double radius_);
	Circle(double radius_, Color color_, bool filled_);
	double getArea() override;//如果在派生类里不去重定义纯虚函数，不去实现，则此纯虚函数仍保持纯虚状态，此时Circle变为抽象类
	double getRadius() const;
	void setRadius(double radius);

	string toString();
private:
	double radius;
};