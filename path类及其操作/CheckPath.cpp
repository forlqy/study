#include <iostream>
#include <filesystem>
#include <string>
namespace fs = std::filesystem;
int main() {
	//����·����ʹ�����ַ�����ת���ַ�������б���ַ��� 
	fs::path p1{ "c:\\����\\Project1\\path�༰�����\\Hello.txt" };
	fs::path p2{ R"(c:\����\Project1\path�༰�����)" };
	fs::path p3{ "c:/����/Project1/path�༰�����/Hello.txt" };
	//���Ĭ���ļ��ָ���
	std::cout << "file separator is: " << fs::path::preferred_separator << std::endl;
	//�ж��Ƿ��ǳ����ļ�������ǣ�����ļ���С
	if (fs::is_regular_file(p2)) {
		std::cout << p2 << "s size is: " << fs::file_size(p2) << std::endl;
	}//�ж��Ƿ���Ŀ¼�������Ŀ¼���г�����Ŀ¼
	else if (fs::is_directory(p2)) {
		std::cout << p2 << "is a directory, includes: " << std::endl;
		for (auto& e : fs::directory_iterator(p2)) {
			std::cout << " " << e.path() << '\n';
		}
	}
	//�ж�·���Ƿ����
	else if (fs::exists(p2)) {
		std::cout << p2 << "is a special file\n";
	}
	else {
		std::cout << p2 << "does not exist" << std::endl;
	}
	return 0;
}