#include <iostream>
#include "Date.h"
#include "Employee.h"
int Employee::numberOfObjects{ 0 };
//4:在堆和栈（函数作用域与内嵌作用域）上分别创建Employee对象，观察析构函数的行为
int main() {
	Employee e1;
	std::cout << e1.toString() << std::endl;
	Employee* e2 = new Employee{ "John",Gender::male,Date(1990,3,2) };
	std::cout << e2->toString() << std::endl;
   {
		Employee e3{ "Alice",Gender::female,Date(2002,05,21) };
		std::cout << e3.toString() << std::endl;
   }
   std::cin.get();//无这条语句析构函数被执行两次
   return (0);
}