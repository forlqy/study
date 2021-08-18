#include <iostream>
using namespace std;
void swap(int& x, int& y, int& z) {
	int t = y;
	y = x; x = z; z = t;
	cout << x << " " << y << " " << z;
}
//int max(int m, int n) {
	//return m > n ? m : n;
//}
int max(int a, int b, int c) {
	int m = 0;
	m = a > b ? a : b;
	return m > c ? m : c;
}

int main() {
	int num1{ 0 }, num2{ 0 }, num3{ 0 };
	cout << "请输入要操作的三个数：";
	cin >> num1 >> num2 >> num3;
	cout << max(num1, num2, num3) << " ";
	swap(num1, num2, num3);
	return 0;
}