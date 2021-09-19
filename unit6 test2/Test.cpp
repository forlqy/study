#include <iostream>
#include <vector>
#include "Dog.h"
int Animal::number = 0;//静态成员变量在类外初始化
int main() {
	int N;
	std::cin >> N;
	std::vector<Animal*>v1;
	std::vector<Dog*>v2;
	for (int i = 0; i < N; ++i) {
		v1.push_back(new Animal);
		
		v2.push_back(new Dog);
		std::cout << Animal::number << std::endl;
	}

	for (int i = 0; i < v1.size(); i++) {
		delete v1[i];
		v1[i] = NULL;
		delete v2[i];
		v2[i] = NULL;
		std::cout << Animal::number << std::endl;
	}
	return 0;
}