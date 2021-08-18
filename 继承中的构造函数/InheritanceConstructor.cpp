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
	D(double x) : e1{}, e2{} , B(static_cast<int>(x)){cout << "D(" << x << ")" << endl; }//���ȵ��û���Ĺ��캯����Ȼ�������Ƕ����Ĺ��캯�������ִ�д˹��캯����
private:
	E e1, e2;
};//������Ĭ������Ĭ�Ϲ��캯�������û������Ĭ�Ϲ��캯��

int main() {
	B b;
	D d;
	D d2{ 3.03 };
	std::cin.get();
}