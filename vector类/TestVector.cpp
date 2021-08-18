#include <iostream>
#include <vector>
#include <string>

#include "Helper.h"

int main() {
	//用c++11的列表初始化，创建vector对象words1
	std::vector<std::string>words1{ "Hello", "World", "Welcome", "To", "C!" };
	PRINT(words1);
	//删除words1最后一个元素
	words1.erase(words1.end() - 1);//
	PRINT(words1);
	//在words1尾部追加元素
	words1.push_back("C++!");
	PRINT(words1);
	//用迭代器拷贝words1的内容以创建words2
	std::vector words2(words1.begin() + 2, words1.end());//c++17模板类的参数类型的自动推导
	PRINT(words2);
	//在words2中插入元素
	words2.insert(words2.begin(), "Hello!");
	PRINT(words2);
	//用拷贝构造创建words3
	std::vector words3(words2);
	PRINT(words3);
	//用[]修改words3的元素
	words3[3] = "C Plus Plus";
	PRINT(words3);
	//创建words4,初始化为多个相同的字串
	std::vector<std::string> words4(4, "C++！");
	PRINT(words4);
	//words3与words4交换
	words3.swap(words4);
	std::cout << "after swap:" << std::endl;
	PRINT(words3);
	PRINT(words4);
	std::cin.get();
	return (0);
}