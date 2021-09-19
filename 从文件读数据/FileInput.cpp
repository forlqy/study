#include <iostream>
#include <filesystem>
#include <fstream>
#include <string>
using std::ifstream;
using std::ofstream;
using std::cout;
using std::endl;
using std::string;
namespace fs = std::filesystem;

int main() {
	fs::path p{ "scores.txt" };

	ifstream input{ p };
	if (input.fail()) {//判断文件是否成功打开
		cout << "Can not open file " << p << endl;
		return 0;
	}

	string name{ "" };
	double score{ 0.0 };

	/*input >> name >> score;
	cout << name << " " << score << endl;
	input >> name >> score;
	cout << name << " " << score;*/
	char x;
	while (!input.get(x).eof()) {
		cout << x;
	}


	return 0;
}