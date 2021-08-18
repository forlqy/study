#include <iostream>
#include <string>
#include "Parse.h"

int Parse::getFirst(){
	return (firstNum);
}
int Parse::getLast() {
	return (lastNum);
}
Parse::Parse(std::string s) {
	int n = s.find_first_of("-");
	firstNum = std::stoi(s.substr(0, n));
	lastNum = std::stoi(s.substr(n + 1 , s.size()));
}