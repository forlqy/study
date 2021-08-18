#include <iostream>
#include <filesystem>
namespace fs = std::filesystem;
using std::cout;
using std::endl;
int main() {
	//定义路径p
	fs::path p{ R"(c:\代码\Project1\路径的组成成分\PathQuery.cpp)" };
	//是否存在？根名？根路径？相对路径？
	if (p.empty()) {
		cout << "Path" << p << "is empty" << endl;
	}

	if (!fs::exists(p)) {
		cout << "Path" << p << "does not exists. " << endl;
		std::exit(0);
	}

	cout << "root_name(): ";
	//父路径？ 7文件名？文件名主干？扩展名？
	return 0;
}