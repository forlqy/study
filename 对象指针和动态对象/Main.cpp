#include <iostream>
#include "Circle.h"
using std::cout;
using std::endl;
int main() {
	auto* c1 = new Circle{ 1.0 };//c1仍然是Circle*类型的指针
	Circle c3{ 2.0 };
	auto c2 = &c3;

	cout << (*c1).getArea() << endl;//.运算符优先级比*解引用高，所以加()
	cout << c2->getArea() << endl;

	auto c5 = new Circle[3]{ 1.0,2.0,3.0 };
	for (int i = 0; i < 3; ++i) {
		cout << c5[i].getArea() << endl;
	}

	delete c1;
	delete[] c5;
	c1 = c5 = nullptr;
	delete c1;//c++11删除一个空指针不会带来异常
	/*for (auto x : c5) {
		cout << x.getArea() << endl;基于范围的for循环引用的内容必须为一种集合数据类型，例如数组、容器，c5为一个指针Circle*,虽然指向一个数组，但无法使用基于范围的for循环访问其中的内容
	}*/
	return (0);
}