#include <iostream>
using namespace std;
class Circle {
private:
	double radius;
public:
	Circle() = default;
	Circle(double r) {
		radius = r;
	}
	double getArea() {
		return (3.14 * radius * radius);
	}
};
class Square {
private:
	double side;
public:
	Square() = delete;
	Square(double side) //:side{ side } {}
	{
		this->side = side;
	}
	double getArea() {
		return (side * side);
	}
};
class Combo {
public:
	Circle c;
	Square s;
	Combo() :s{ 1.0 }, c{ 2.0 } {//初始化列表，一定要在主对象构造函数体之前把内嵌对象初始化
		s = { 8.0 };//这地方只能给s对象赋值而不能进行初始化
	}
};
int main() {
	Combo o;
	cout << o.c.getArea() << endl;
	return (0);
}