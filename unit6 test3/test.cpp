#include <iostream>
#include <vector>
#include "Dog.h"
#include "Cat.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::vector;

int main() {
	int N;
	cin >> N;
	vector<Animal*>v;
	for (int i = 0; i < N; i++) {
		v.push_back(new Dog);
		v.push_back(new Cat);
	}
	for (int i = 0; i < v.size(); i++) {//i < v.size();±È½ÏºÃ
		v[i]->speak();
		delete v[i];
		v[i] = NULL;//
	}
	return 0;
}