#include <iostream>
#include <fstream>
#include <filesystem>


namespace fs = std::filesystem;
int main() {
    using fo = std::ios;
    //������������ļ������ֱ�Ϊapp��truncģʽ
    fs::path p1{ "city1.txt" }, p2{ "city2.txt" };

    std::ofstream out1{ p1, fo::out | fo::app };
    std::ofstream out2{ p2, fo::out | fo::trunc };
    //�Ӽ��̶����ַ�������������ļ�����
    char c;
    while (!std::cin.get(c).eof()) {
        out1.put(c);
        out2.put(c);
    }
    //�ر��ļ���
    out1.close();
    out2.close();
    //��ģʽ������IO�ļ���������һ��ʹ��ateģʽ
    std::fstream in1{ p1, fo::in };
    std::fstream in2{ p2, fo::in | fo::ate };
    //��������ļ�������
    std::cout << p1 << std::endl;
    while (!in2.get(c).eof()) {
        std::cout << c;
    }
    //�ر�IO�ļ���
    in1.close();
    in2.close();

    return 0;
}
