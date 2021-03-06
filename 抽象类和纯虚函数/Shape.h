#pragma once
#include <iostream>
#include <string>
#include <array>
using std::string;
using namespace std::string_literals;//c++14字符串字面量
enum class Color {
	white, black, red, green, blue, yellow,
};

class Shape {
private:
	Color color{ Color::black };
	bool filled{ false };
	std::array<string, 6> colorNames{ "white"s, "black"s, "red"s, "green", "blue"s, "yellow"s };
public:
	Shape() = default;
	Shape(Color color_, bool filled_);

	Color getColor();
	void setColor(Color color_);
	bool isFilled();
	void setFilled(bool filled_);



	string toString();
	string colorToString();
	string filledToString();

	virtual double getArea() = 0;//纯虚函数不能定义函数体，且包含纯虚函数的类为抽象类，不能实例化
};
