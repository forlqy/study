#include <iostream>
#include <string>
using namespace std;

int main() {
	//�����ַ���
	string s{ "Hello"};
	//clear
	s.clear();
	//������Ϊ�ַ�����ֵ
	char arr[]{ 'w','o','r','l','d','\0' };//����\0���������
	s += arr;
	//assign()
	s.assign("1024");
	//append
	s.append("   ");
	s.append(5, '\t');
	//s.append("!");
	cout << s << endl;
	//s.append("!");
	//insert �հ�
	s.insert(0, "    ");
	//�Ƴ��ַ���ǰ��Ŀհ�
	s.erase(0, s.find_first_not_of("\t \n \r"));
	//�Ƴ�����հ�
	s.erase(s.find_last_not_of("\t \n \r")+ 1);
	//���ַ���ת��Ϊ�����򸡵���
	int x = std::stoi(s);
	cout << s << endl;
	cout << "x = " << x << endl;

	string s2 = std::to_string(x);
	cout << "s2:" << s2;
	return (0);
}