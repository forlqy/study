#include <iostream>
#include <array>
int main() {
	//int a[]{ 1,2,3 };//ԭ������
	std::array a{ 1,2,3 };
	std::array<int, 2>b{ 11,23 };


	auto [e1, e2, e3] = a;//��ʶ������Ŀ������ṹ����������Ԫ�س�Ա����Ŀ��ƥ��

	auto const [f1, f2, f3] {a};
	//f1 = 10;
	auto& [a1, a2, a3](a);
	std::cout << e1 << " " << e2 << " " << e3 << std::endl;
	return 0;
}