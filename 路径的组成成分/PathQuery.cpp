#include <iostream>
#include <filesystem>
namespace fs = std::filesystem;
using std::cout;
using std::endl;
int main() {
	//����·��p
	fs::path p{ R"(c:\����\Project1\·������ɳɷ�\PathQuery.cpp)" };
	//�Ƿ���ڣ���������·�������·����
	if (p.empty()) {
		cout << "Path" << p << "is empty" << endl;
	}

	if (!fs::exists(p)) {
		cout << "Path" << p << "does not exists. " << endl;
		std::exit(0);
	}

	cout << "root_name(): ";
	//��·���� 7�ļ������ļ������ɣ���չ����
	return 0;
}