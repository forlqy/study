#include <iostream>
#include <string>
using std::cout;
using std::endl;

class A {
public:
	virtual std::string toString() { return "A"; }//�̳����ϵ��������ͬ������Ҳ���Ϊvirtual
};

class B : public A {
public:
	std::string toString() override{ return "B"; }//override ֻ����������ʹ�� ָ��һ���麯����д��һ���麯��  ��ʾ�������ͬ�������ǶԻ����ͬ�������ĸ�д�����뱣֤��������ֵ�ͺ�����һ�£���Ȼ�ͻ�����ڱ���
};//�����дoverride�Һ�����д����ôʵ�ʵ��ö���B��toString�����Ҳ����ͻ����ż̳������ϵ��û����toString����

class C : public B {
public:
	std::string toString() override{ return "C"; }//final��ʶ����ʾ���麯������д�������ո�д
};

void print(A* o) {
	cout << o->toString() << endl;
}
void print(A& o) {
	cout << o.toString() << endl;//����ָ��ͻ������õ���ͬ������ʱ������ʵ�ʶ����ͬ������
}
int main() {
	A a; B b; C c;
	A* p1 = &a;
	A* p2 = &b;
	A* p3 = &c;
	print(p1);
	print(p2);
	print(p3);

	print(a);
	print(b);
	print(c);
	std::cin.get();
}