#include <iostream>
using std::cout;
using std::endl;
class Square {
private:
	double side = 1.0;
public:
	Square() = default;//c++11强制编译器生成一个默认构造函数
	Square(double side) {
		this->side = side;
	}
	double getArea() {
		return (side * side);
	}
};
int main() {
	Square s1, s2{ 4.0 };
	cout << s1.getArea() << endl;
	cout << s2.getArea() << endl;
	s1 = s2;
	cout << s1.getArea() << endl;
	cout << s2.getArea() << endl;
	return (0);
}