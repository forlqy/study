#include <iostream>
#include "Book.h"
#include "Student.h"
using std::cout;
using std::endl;

int main(){
	Book book[3] = { {01,"�й�����ʷ��Ҫ","������"},{02,"c++������������ر��","Bjarne Stroustrup"},{03,"Effective C++","Scott Meyers"}};
	Student student1{ "����ѧ", "2008170306", book[0] };
	cout << book[1].getInformation() << endl; 
	book[2].setInformation(1, "��ѧ", "123");
	cout << book[2].getInformation() << endl;
	cout << student1.showInformation() << endl;
	student1.setStudentInformation("�����", "2008170315");
	cout << student1.showInformation() << endl;
	cout << "                  " << "2 c++������������ر�� Bjarne Stroustrup";
	return (0);
}