#include "Circle.h"
#include <iostream>
using namespace std;
int main() {
	Circle c1;
	Circle c2{ 2.0 };
	cout << c1.getArea() << endl;
	cout << c2.getArea() << endl;
	return (0);
}