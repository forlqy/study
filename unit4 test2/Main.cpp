#include <iostream>
#include <string>
#include "Parse1.h"
int main() {
	std::string s{};
	std::cin >> s;  // �û�����һ����Χ�ַ���
	Parse1 p(s);     // ����Parse����p��ͬʱ�����ַ��� s
	std::cout << p.getFirstNum() << ' ' << p.getLastNum(); // �м���������������������һ���ո��ַ�
	return 0;
}