#pragma once
#include <string>
#include "Book.h"
#include <vector>


class Student:public Book {
private:
	std::string name;
	std::string schoolNumber;
	std::string list[3];
	int bookamount{0};
public:
	Student(std::string name, std::string schoolNumber, Book borrow);
	std::string showInformation();
	void setStudentInformation(std::string name, std::string schoolNumber);
	void addbook(Book m);
	void deletebook(Book n);
};

Student::Student(std::string name, std::string schoolNumber, Book borrow) {
	this->name = name;
	this->schoolNumber = schoolNumber;
	this->list[0] = borrow.getInformation();
}

std::string Student::showInformation() {
	std::string inf;
	inf = name + " " + schoolNumber + " " + list[bookamount] + '\n' + list[bookamount + 1];
	return inf;
}

void Student::setStudentInformation(std::string name, std::string schoolNumber) {
	this->name = name;
	this->schoolNumber = schoolNumber;
}

void Student::deletebook(Book n) {
	this->list[bookamount] = " ";
	bookamount--;
}

void Student::addbook(Book m) {
	int bookamount = 1;
	this->list[bookamount] = Book::getInformation();
	bookamount++;
	this->bookamount = bookamount;
}