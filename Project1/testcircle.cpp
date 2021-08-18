#include <iostream>
using namespace std;
class Circle {
public:
	Circle() {
		radius = 1.0;
	}
	Circle(double r) {
		radius = r;
	}
	double getArea() {
		return (3.14 * radius * radius);
	}
private:
	double radius;
};
int main() {
	Circle c1;
	Circle c2{ 2.0 };
	cout << c1.getArea() << endl;
	cout << c2.getArea() << endl;
	return (0);
}