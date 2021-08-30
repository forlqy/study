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
	B() { cout << "B()" << endl; }//��ʽ�ĵ���class A��Ĭ�Ϲ��캯��
	B(int j) { cout << "B(" << j << ")" << endl; }//���캯���ĳ�ʼ���б�û��ָ�����û�������ĸ����캯����Ĭ�ϵ���Ĭ�Ϲ��캯����
};

int main() {
	A a1{};
	A a2{ 1 };
	B b1{};
	B b2{ 2 };
}