#include <iostream>
#include <array>
#include <algorithm>
using std::cout;
using std::endl;
using std::array;
void print(array<int,3>& a) {
	for (auto x : a) {
		cout << x << " ";
	}
	cout << endl;
}
int search(array<int, 3>& a, int token) {
	bool exist{ false };
	int i = 0;
	for (auto element : a) {
		if (element == token) {
			exist = true;
			break;
		}
		i++;
	}
	if (exist)
		return (i);
	else
		return (-1);
}
int main() {
	//1.��������
	array a1 = { 1,2,4 };//array<int,3>
	print(a1);
	//2.Ϊ���鸳ֵ
	a1 = { 7,8,9 };
	print(a1);
	//3.��������
	array b1{ 100,200,300 };
	print(b1);
	a1.swap(b1);
	print(a1);
	print(b1);
	//4.�������С
	cout << a1.size() << endl;
	cout << a1.max_size() << endl;
	//5.��дsearch�������������в���һ��ֵ
	cout << "search 300: " << search(a1, 300) << endl;
	cout << "search   1: " << search(a1, 1) << endl;
	//6.sort
	std::sort(a1.begin(), a1.end());
	print(a1);
	//7.��ά����
	std::array<std::array<int, 3>, 4>a8;
	return (0);
}