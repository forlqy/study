#include <iostream>
#include "Circle3.h"
using namespace std;
int main() {
	Circle c{ 1.0 };

	cout << c.setRadius(2.0).setRadius(3.0).getArea() << endl;//如果setRadius函数前不加&，则第一步c.setRadius(2.0)返回一个匿名对象后续语句改变的是匿名对象的值，所以到程序结束依旧是2.0；
	return (0);
}