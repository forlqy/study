#include <iostream>
#include <string>
using namespace std;

auto max(int x, int y) {
	return x > y ? x : y;
}

auto max(int a, int b, int c) {
	return max(a, max(b, c));
}
int i = 100;
int main() {
	//Variable Scope����������
	//int i{ 100 };
		//for (int i = 1; i < 5; i++) {
			//cout << i << " "
			//c++11 std::to_string();�ַ�����Ӻ��� Java��������
			//cout << std::to_string(i) + "##";
			//cout << endl << ::i << endl;
	//}
    //Overloading Functions
	cout << max(1, 2, 3);
}
