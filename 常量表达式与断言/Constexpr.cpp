#include <iostream>
#include <array>
#include <cassert>//使用断言必须包含的头文件
using std::cout;
using std::endl;
//1.用递归计算factorial，用assert检查3的阶乘
constexpr int factorial(int n) {
	if (n == 0) {
		return 1;
	}
	else {
		return (n * factorial(n - 1));
	}
}
//2.将factorial变成常量表达式，用static_assert检查3的阶乘

//3.创建factorial(4)大小的数组

int main() {
	//int x = 3;
	//auto f = factorial(x);
	//assert(f == 6);
	static_assert(factorial(4) == 24, "factorial(4) should be 24");
	std::array<int, factorial(4)> a;//后面的值必须在编译期间就得有初始化，由于constexpr得以实现
	cout << a.size();
	std::cin.get();
	return (0);
}