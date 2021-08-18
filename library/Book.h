#pragma once
#include <string>
class Book {
private:
	int id;
	std::string bookname;
	std::string author;
public:
	Book() = default;
	Book(int a, std::string bookname, std::string author);
	std::string getInformation();
	void setInformation(int b, std::string name1, std::string author1);
};

Book::Book(int a, std::string name, std::string author) {
	this->id = a;
	this->bookname = name;
	this->author = author;
}

std::string Book::getInformation() {
	std::string id1 = std::to_string(id);
	std::string Information = id1 + " " + bookname + " " + author;
	return (Information);
}

void Book::setInformation(int b, std::string name1, std::string author1) {
	this->id = b;
	this->bookname = name1;
	this->author = author1;
}
