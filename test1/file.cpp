#include <iostream>
#include <filesystem>
#include <fstream>


namespace fs = std::filesystem;
int main() {
	fs::path p1{ "c:/ДњТы/Project1/test1/out.txt" };
	fs::path p2{ "c:/ДњТы/Project1/test1/in.txt" };

	std::ofstream output{ p1 };
	std::ifstream open{ p2 };
	if (fs::exists(p2))
		std::cout << "in.txt exists" << std::endl;
	else std::cout << "in.txt does not exists" << std::endl;
}