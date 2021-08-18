#include <iostream>
#include <string>
using std::cout;
using std::endl;

class A {
public:
	virtual std::string toString() { return "A"; }//继承链上的派生类的同名函数也会变为virtual
};

class B : public A {
public:
	std::string toString() override{ return "B"; }//override 只能在类里面使用 指定一个虚函数覆写另一个虚函数  表示派生类的同名函数是对基类的同名函数的覆写，必须保证函数返回值和函数名一致，不然就会编译期报错
};//如果不写override且函数名写错，那么实际调用对象B的toString函数找不到就会沿着继承链向上调用基类的toString函数

class C : public B {
public:
	std::string toString() override{ return "C"; }//final标识符表示此虚函数被覆写且是最终覆写
};

void print(A* o) {
	cout << o->toString() << endl;
}
void print(A& o) {
	cout << o.toString() << endl;//基类指针和基类引用调用同名函数时均调用实际对象的同名函数
}
int main() {
	A a; B b; C c;
	A* p1 = &a;
	A* p2 = &b;
	A* p3 = &c;
	print(p1);
	print(p2);
	print(p3);

	print(a);
	print(b);
	print(c);
	std::cin.get();
}