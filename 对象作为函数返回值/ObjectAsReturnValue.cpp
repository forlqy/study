#include <iostream>
#include "Circle3.h"
using namespace std;
int main() {
	Circle c{ 1.0 };

	cout << c.setRadius(2.0).setRadius(3.0).getArea() << endl;//���setRadius����ǰ����&�����һ��c.setRadius(2.0)����һ����������������ı�������������ֵ�����Ե��������������2.0��
	return (0);
}