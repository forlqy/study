#include <iostream>
#include "Book.h"
#include "Student.h"
using std::cout;
using std::endl;

int main(){
	Book book[3] = { {01,"中国近代史纲要","李晓晨"},{02,"c++程序设计语言特别版","Bjarne Stroustrup"},{03,"Effective C++","Scott Meyers"}};
	Student student1{ "韩治学", "2008170306", book[0] };
	cout << book[1].getInformation() << endl; 
	book[2].setInformation(1, "数学", "123");
	cout << book[2].getInformation() << endl;
	cout << student1.showInformation() << endl;
	student1.setStudentInformation("王昊文", "2008170315");
	cout << student1.showInformation() << endl;
	cout << "                  " << "2 c++程序设计语言特别版 Bjarne Stroustrup";
	return (0);
}