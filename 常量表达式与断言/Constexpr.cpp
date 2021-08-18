#include <iostream>
#include <array>
#include <cassert>//ʹ�ö��Ա��������ͷ�ļ�
using std::cout;
using std::endl;
//1.�õݹ����factorial����assert���3�Ľ׳�
constexpr int factorial(int n) {
	if (n == 0) {
		return 1;
	}
	else {
		return (n * factorial(n - 1));
	}
}
//2.��factorial��ɳ������ʽ����static_assert���3�Ľ׳�

//3.����factorial(4)��С������

int main() {
	//int x = 3;
	//auto f = factorial(x);
	//assert(f == 6);
	static_assert(factorial(4) == 24, "factorial(4) should be 24");
	std::array<int, factorial(4)> a;//�����ֵ�����ڱ����ڼ�͵��г�ʼ��������constexpr����ʵ��
	cout << a.size();
	std::cin.get();
	return (0);
}