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
	Combo() :s{ 1.0 }, c{ 2.0 } {//��ʼ���б�һ��Ҫ���������캯����֮ǰ����Ƕ�����ʼ��
		s = { 8.0 };//��ط�ֻ�ܸ�s����ֵ�����ܽ��г�ʼ��
	}
};
int main() {
	Combo o;
	cout << o.c.getArea() << endl;
	return (0);
}