#include <iostream>
#include "Employee.h"
#include "Date.h"
//1:����Employee����e1����������e2
//2:����ģʽ�۲�e1��e2��birthday��Ա
//3:��ӿ������캯��ʵ�����
//4:����ģʽ�۲�e1��e2��birthday��Ա
int Employee::numberOfObjects = 0;
int main() {
	Employee e1{ "��ͬ��",Gender::male,{2003,02,27} };
	Employee e2{ e1 };
	std::cout << e1.toString() << std::endl;
	std::cout << e2.toString() << std::endl;
	std::cin.get();
	return (0);
}