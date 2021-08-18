#include <iostream>
#include <string>
using namespace std;

int main() {
	//创建字符串
	string s{ "Hello"};
	//clear
	s.clear();
	//用数组为字符串赋值
	char arr[]{ 'w','o','r','l','d','\0' };//不加\0会输出乱码
	s += arr;
	//assign()
	s.assign("1024");
	//append
	s.append("   ");
	s.append(5, '\t');
	//s.append("!");
	cout << s << endl;
	//s.append("!");
	//insert 空白
	s.insert(0, "    ");
	//移除字符串前面的空白
	s.erase(0, s.find_first_not_of("\t \n \r"));
	//移除后面空白
	s.erase(s.find_last_not_of("\t \n \r")+ 1);
	//把字符串转换为整数或浮点数
	int x = std::stoi(s);
	cout << s << endl;
	cout << "x = " << x << endl;

	string s2 = std::to_string(x);
	cout << "s2:" << s2;
	return (0);
}