#include <iostream>
#include <cstdlib>
int main() {
	std::cout << "��������0~100֮�������...\n";
	std::cout << "��������²��������";
	auto x{ 0 };
	std::cin >> x;
	if (int z = rand() % 100; x > z) {
		std::cout << "��´���,�ҵ�����" << z << std::endl;
	}
	else if (x < z) {
		std::cout << "���С��,�ҵ�����" << z << std::endl;
	}
	else {
		std::cout << "��¶���";
	}
	return 0;
}