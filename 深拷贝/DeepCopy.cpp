#include <iostream>
#include "Employee.h"
#include "Date.h"
//1:构造Employee对象e1，拷贝构造e2
//2:调试模式观察e1和e2的birthday成员
//3:添加拷贝构造函数实现深拷贝
//4:调试模式观察e1和e2的birthday成员
int Employee::numberOfObjects = 0;
int main() {
	Employee e1{ "王同傲",Gender::male,{2003,02,27} };
	Employee e2{ e1 };
	std::cout << e1.toString() << std::endl;
	std::cout << e2.toString() << std::endl;
	std::cin.get();
	return (0);
}