#pragma once
#include <string>
//Book��
using namespace std;
class Book
{
private:
    string Book_name;   //�������
    string Book_writer; //�������
public:
    string Book_ISBN;   //��ı��
    void creat_book(string isbn, string name, string writer);    //����ͼ�����
    void book_show();    //ͼ����Ϣչʾ
    void book_alter();   //ͼ����Ϣ�޸�   
    string get_name()
    {
        return Book_name;
    }
    string get_writer()
    {
        return Book_writer;
    }
    string get_isbn()
    {
        return Book_ISBN;
    }
};



//����ͼ�����
void Book::creat_book(string isbn = "", string name = "", string writer = "")
{
    cout << "\t\t\t\t**********����������ͼ���ISBN��š�����������****" << endl;
    cout << "\t\t\t\t���:";
    cin >> isbn;
    cout << "\t\t\t\t����:";
    cin >> name;
    cout << "\t\t\t\t����:";
    cin >> writer;
    this->Book_ISBN = isbn;
    this->Book_name = name;
    this->Book_writer = writer;
}


//ͼ����Ϣչʾ
void Book::book_show()
{
    cout << "\t\t\t\t**********Book_ISBN: " << Book_ISBN << "**********" << endl;
    cout << "\t\t\t\t**********Book_name: " << Book_name << "*********" << endl;
    cout << "\t\t\t\t**********Book_writer: " << Book_writer << "**********" << endl;
    cout << endl;
}


//ͼ����Ϣ�޸�
void Book::book_alter()
{
    int bj;
    cout << "\t\t\t\t**********1.�޸�ͼ��ı��**********" << endl;
    cout << "\t\t\t\t**********2.�޸�ͼ�������**********" << endl;
    cout << "\t\t\t\t**********3.�޸�ͼ�������**********" << endl;
    cout << "\t\t\t\t��ѡ��Ҫ�޸ĵ�ͼ����Ϣ:";
    cin >> bj;
    switch (bj)
    {
    case 1:
        cout << "\t\t\t\t**********�������µ�ͼ����:**********" << endl;
        cin >> Book_ISBN;
        break;
    case 2:
        cout << "\t\t\t\t**********�������µ�ͼ������:**********" << endl;
        cin >> Book_name;
        break;
    case 3:
        cout << "\t\t\t\t**********�������µ�ͼ������:**********" << endl;
        cin >> Book_writer;
        break;
    }
    cout << endl;
}