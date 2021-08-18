#include <iostream>
#include <array>
int main() {
	//int a[]{ 1,2,3 };//原生数组
	std::array a{ 1,2,3 };
	std::array<int, 2>b{ 11,23 };


	auto [e1, e2, e3] = a;//标识符的数目必须与结构化绑定中数组元素成员的数目相匹配

	auto const [f1, f2, f3] {a};
	//f1 = 10;
	auto& [a1, a2, a3](a);
	std::cout << e1 << " " << e2 << " " << e3 << std::endl;
	return 0;
}