#include <iostream>
using namespace std;
int main() {
	int x[10] = { 21,34,67,34,73,6,2,8,5,99 };
	int i = 0;
	for ( auto a : x) {
		i++;
		cout << i << "," << a << endl;
	}
	int a[] = { 2,1,4,3,5 };//int������auto���棬a[]c������顣��std::array<int,4>a1{2,4,6,8};  std::vector<int>v = {42,7,5};std::vector<std::string>s{"a","B"};
	for (auto k : a) {
		cout << k << " " ;
	}
	cout << endl;
	for (auto& k : a) {
		k = 2 * k;
		cout << k << " ";
	}//����&���ԶԼ����ڵ�Ԫ�ؽ��в���������ֻ�Ƕ�k������k����Ϊ������Ԫ�صĿ���

}