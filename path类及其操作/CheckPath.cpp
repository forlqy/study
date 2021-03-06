#include <iostream>
#include <filesystem>
#include <string>
namespace fs = std::filesystem;
int main() {
	//定义路径，使用生字符串、转义字符串、正斜杠字符串 
	fs::path p1{ "c:\\代码\\Project1\\path类及其操作\\Hello.txt" };
	fs::path p2{ R"(c:\代码\Project1\path类及其操作)" };
	fs::path p3{ "c:/代码/Project1/path类及其操作/Hello.txt" };
	//输出默认文件分隔符
	std::cout << "file separator is: " << fs::path::preferred_separator << std::endl;
	//判断是否是常规文件，如果是，输出文件大小
	if (fs::is_regular_file(p2)) {
		std::cout << p2 << "s size is: " << fs::file_size(p2) << std::endl;
	}//判断是否是目录，如果是目录，列出其子目录
	else if (fs::is_directory(p2)) {
		std::cout << p2 << "is a directory, includes: " << std::endl;
		for (auto& e : fs::directory_iterator(p2)) {
			std::cout << " " << e.path() << '\n';
		}
	}
	//判断路径是否存在
	else if (fs::exists(p2)) {
		std::cout << p2 << "is a special file\n";
	}
	else {
		std::cout << p2 << "does not exist" << std::endl;
	}
	return 0;
}