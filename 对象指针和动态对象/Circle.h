#pragma once
class Circle {//类的声明与实现分离只涉及到函数，不涉及到类的数据成员
public:
	Circle();
	Circle(double radius_);
	double getArea();
private:
	double radius;
};