#pragma once
//1:���Ӿ�̬��Ա�������Ա���������
//2:����Ա������ո�Ϊ*Date���͵�ָ��
//3:�޸Ĺ��캯������������
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
		this->birthday = new Date{ birthday };//���д�����ʵ������Date��Ŀ������캯������ʽ�����Ŀ������캯��
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