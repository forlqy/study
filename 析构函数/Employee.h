#pragma once
//1:增加静态成员，计算雇员对象的数量
//2:将雇员类的生日改为*Date类型的指针
//3:修改构造函数和析构函数
#include <iostream>
#include <string>
enum class Gender {
	male,
	female,
};
class Employee {
private:
	std::string name;
	Gender gender;
	Date* birthday;
	static int numberOfObjects;
public:
	void setName(std::string name) { this->name = name; }
	void setGender(Gender gender) { this->gender = gender; }
	void setBirthday(Date birthday) { *(this->birthday) = birthday; }
	std::string getName() { return name; }
	Gender getGender() { return gender; }
	Date getBirthday() { return *birthday; }
	std::string toString() {
		return (name + (gender == Gender::male ? std::string("male") : std::string("female")) + birthday->toString());
	}
	Employee(std::string name, Gender gender, Date birthday) :name{ name }, gender{ gender }{
		numberOfObjects++;
		this->birthday = new Date{ birthday };//这行代码其实调用了Date类的拷贝构造函数，隐式声明的拷贝构造函数
		std::cout << "How there are : " << numberOfObjects << "employees" << std::endl;
	}
	Employee() : Employee("Alan", Gender::male, Date(2000, 4, 1)) {}
	~Employee() {
		numberOfObjects--;
		delete birthday;
		birthday = nullptr;
		std::cout << "Now there are : " << numberOfObjects << "enployees" << std::endl;
	}
};