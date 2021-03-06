#include <iostream>
#include <filesystem>

int main() {
	using std::cout;
	using std::endl;
	namespace fs = std::filesystem;

	//定义路径对象
	fs::path p{ "C:\\" };
	//展示磁盘总大小和剩余大小
	cout << "C total space: " << fs::space(p).capacity << endl;
	cout << "C free space: " << fs::space(p).free << endl;

	return 0;
}