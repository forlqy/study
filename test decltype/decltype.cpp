#include <iostream>
using namespace std;
int fun1() { return 10; }
auto fun2() { return 4.0; }//decltype在编译时期来推导一个表达式的类型，而不用初始化，语法格式像sizeof;而auto必须初始化
int main() {
	decltype(fun1()) x;
	decltype(fun2()) y = fun2();
	cout << typeid(x).name() << endl;
	cout << typeid(y).name() << endl;//decltype主要用于泛型编程（模板）
	return 0;
}