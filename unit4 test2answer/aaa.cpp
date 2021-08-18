
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
	std::cin >> s;  // �û�����һ����Χ�ַ���
	Parse p(s);     // ����Parse����p��ͬʱ�����ַ��� s
	std::cout << p.getFirst() << ' ' << p.getLast(); // �м���������������������һ���ո��ַ�
	return 0;
}
