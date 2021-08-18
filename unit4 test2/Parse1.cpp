#include <iostream>
#include "Parse1.h"
#include <string>

Parse1::Parse1(std::string s) {
	int n = s.find_first_of("-");
	for (int i = 0; i < n; ++i) {
		if (isdigit(s[i]) && s[i] != '0') {
			this->Firstnum = std::stoi(s.substr(i, n));
			break;
	}
		
	}
	for (int j = n + 1; j < s.size(); ++j) {
		if (!isdigit(s[j]) || j == s.size() - 1) {
			this->Lastnum = std::stoi(s.substr(n + 1, j));
			break;
		}
	}
}
int Parse1::getFirstNum() {
	return (Firstnum);
}
int Parse1::getLastNum() {
	return (Lastnum);
}