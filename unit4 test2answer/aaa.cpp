
#include <iostream>
#include <string>


class Parse {
private:
	int FirstNum;
	int LastNum;

public:
	Parse(std::string s) {
		int n = s.find_first_of("-");
		for (int i = 0; i < n; i++) {
			if (isdigit(s[i]) && s[i] != '0') {
				FirstNum = std::stoi(s.substr(i, n));
				break;
			}
		}
		for (int i = n + 1; i < s.size(); i++) {
			if (!isdigit(s[i]) || i == s.size() - 1) {
				LastNum = std::stoi(s.substr(n + 1, i));
				break;
			}
		}
	}
	int getFirst() {
		return FirstNum;
	}

	int getLast() {
		return LastNum;
	}
};

int main() {
	std::string s{};
	std::cin >> s;  // 用户输入一个范围字符串
	Parse p(s);     // 构造Parse对象p，同时解析字符串 s
	std::cout << p.getFirst() << ' ' << p.getLast(); // 中间是两个单引号括起来的一个空格字符
	return 0;
}
