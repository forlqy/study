#include <iostream>

struct S {
	double d1{ 1.0 };
	int i1{ 32 };
};

class C {
public:
	int i2{ 1 };
	char c[3]{ 'a','b','\0'};//类成员如果为数组的话，一定要加上数组大小//字符数组如果最后不加‘\0’编译器会自动补充一堆二进制数字，转换成中文就是 '烫'
};

int main() {
	S s;
	C c;

	auto [d1, i1] {s};

	auto& [i2, c2] {c};//绑定类的对象成员必须为公有的

	std::cout << "s.d1=" << d1 << " s.i1= " << i1 << std::endl;
	std::cout << "c.i2=" << i2 << " c.c[3]= " << c2 << std::endl;
	return 0;
}