#include <iostream>
#include "Date.h"
#include "Employee.h"
int Employee::numberOfObjects{ 0 };
//4:�ڶѺ�ջ����������������Ƕ�������Ϸֱ𴴽�Employee���󣬹۲�������������Ϊ
int main() {
	Employee e1;
	std::cout << e1.toString() << std::endl;
	Employee* e2 = new Employee{ "John",Gender::male,Date(1990,3,2) };
	std::cout << e2->toString() << std::endl;
   {
		Employee e3{ "Alice",Gender::female,Date(2002,05,21) };
		std::cout << e3.toString() << std::endl;
   }
   std::cin.get();//�������������������ִ������
   return (0);
}