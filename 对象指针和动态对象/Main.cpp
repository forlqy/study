#include <iostream>
#include "Circle.h"
using std::cout;
using std::endl;
int main() {
	auto* c1 = new Circle{ 1.0 };//c1��Ȼ��Circle*���͵�ָ��
	Circle c3{ 2.0 };
	auto c2 = &c3;

	cout << (*c1).getArea() << endl;//.��������ȼ���*�����øߣ����Լ�()
	cout << c2->getArea() << endl;

	auto c5 = new Circle[3]{ 1.0,2.0,3.0 };
	for (int i = 0; i < 3; ++i) {
		cout << c5[i].getArea() << endl;
	}

	delete c1;
	delete[] c5;
	c1 = c5 = nullptr;
	delete c1;//c++11ɾ��һ����ָ�벻������쳣
	/*for (auto x : c5) {
		cout << x.getArea() << endl;���ڷ�Χ��forѭ�����õ����ݱ���Ϊһ�ּ����������ͣ��������顢������c5Ϊһ��ָ��Circle*,��Ȼָ��һ�����飬���޷�ʹ�û��ڷ�Χ��forѭ���������е�����
	}*/
	return (0);
}