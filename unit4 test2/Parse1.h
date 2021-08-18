#pragma once
#include <string>
class Parse1 {
public:
	Parse1(std::string s);
	int getFirstNum();
	int getLastNum();
private:
	int Firstnum;
	int Lastnum;
};