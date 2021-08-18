#include <iostream>
#include <string>
#include "Parse1.h"
int main() {
	std::string s{};
	std::cin >> s;  // 用户输入一个范围字符串
	Parse1 p(s);     // 构造Parse对象p，同时解析字符串 s
	std::cout << p.getFirstNum() << ' ' << p.getLastNum(); // 中间是两个单引号括起来的一个空格字符
	return 0;
}