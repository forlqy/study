#include <iostream>
#include <string>
#include "Parse.h"
int main() {
	std::string s{};
	std::cin >> s;  // �û�����һ����Χ�ַ���
	Parse p(s);     // ����Parse����p��ͬʱ�����ַ��� s
	std::cout << p.getFirst() << ' ' << p.getLast(); // �м���������������������һ���ո��ַ�
	return 0;
}