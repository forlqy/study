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

	cout << "root_name(): " << p.root_name() << "\n"
		<< "root_path(): " << p.root_path() << "\n"
		<< "relative_path(): " << p.parent_path() << "\n";
		 
		//��·���� 7�ļ������ļ������ɣ���չ����
	cout << "parent_path(): " << p.parent_path() << "\n"
		<< "filename(): " << p.filename() << "\n"
		<< "stem(): " << p.stem() << "\n"
		<< "extension(): " << p.extension() << "\n";
	return 0;
}