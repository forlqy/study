//2:ͨ������/���������þ�̬��Ա����
#include <cassert>
#include <iostream>
#include "Square.h"
int Square::numberOfObjects = 10;
int main() {
	Square s1;
	std::cout << s1.getNumberOfObjects() << std::endl;
	assert(s1.getNumberOfObjects() == 11);
	Square s2{ 20.0 };
	std::cout << Square::getNumberOfObjects() << std::endl;
	std::cout << s2.getNumberOfObjectsNonStatic() << std::endl;
	//std::cout << Square::getNumberOfObjectsNonStatic() << std::endl;//�Ǿ�̬��Ա��������ͨ�����������ķ�ʽ���þ�̬���ݳ�Ա
	return (0);
}