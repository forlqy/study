#include <iostream>
using std::endl;
using std::cout;

   







class B {
public:
	B() { cout << "B()" << endl; }
	B(int i) { cout << "B(" << i << ")" << endl; }
	B(char c) { cout << "B(" << c << ")" << endl; }
};

class E {
public:
	E() { cout << "E()" << endl; }
};

class D : public B {
public:
	using B::B;
	D() = default;
	//D(int i):B(int i){}
	//D(char c){}
	D(double x) : e1{}, e2{} , B(static_cast<int>(x)){cout << "D(" << x << ")" << endl; }//首先调用基类的构造函数，然后调用内嵌对象的构造函数，最后执行此构造函数体
private:
	E e1, e2;
};//编译器默认生成默认构造函数，调用基类里的默认构造函数

int main() {
	B b;
	D d;
	D d2{ 3.03 };
	std::cin.get();
}