#pragma once
class Parse {
public:
	Parse(std::string s_);
	int getFirst();
	int getLast();
private:
	int firstNum;
	int lastNum;
};
#include <string>