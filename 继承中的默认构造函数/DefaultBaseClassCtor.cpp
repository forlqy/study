#include <iostream>
using std::cout;
using std::endl;

class A {
public:
	//A() { cout << "A()" << endl; }
	A() = default;
	A(int i) { cout << "A(" << i << ")" << endl; }
};

class B : public A {
public:
	B() { cout << "B()" << endl; }//隐式的调用class A的默认构造函数
	B(int j) { cout << "B(" << j << ")" << endl; }//构造函数的初始化列表没有指出调用基类里的哪个构造函数，默认调用默认构造函数；
};

int main() {
	A a1{};
	A a2{ 1 };
	B b1{};
	B b2{ 2 };
}