#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
using std::cout;
using std::endl;

int main() {
	//Shape s{ Color::black, true };
	Circle c{ 1.2, Color::green, false };

	Shape* p = &c;
	cout << p->getArea() << endl;//基类里的getArea函数是纯虚函数没有实现，此处调用的是Circle类里重定义的getArea函数
	std::cin.get();
}