#include <iostream>
using namespace std;
int fun1() { return 10; }
auto fun2() { return 4.0; }//decltype�ڱ���ʱ�����Ƶ�һ�����ʽ�����ͣ������ó�ʼ�����﷨��ʽ��sizeof;��auto�����ʼ��
int main() {
	decltype(fun1()) x;
	decltype(fun2()) y = fun2();
	cout << typeid(x).name() << endl;
	cout << typeid(y).name() << endl;//decltype��Ҫ���ڷ��ͱ�̣�ģ�壩
	return 0;
}