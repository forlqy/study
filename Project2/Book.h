#pragma once
#include <string>
//Book类
using namespace std;
class Book
{
private:
    string Book_name;   //书的名字
    string Book_writer; //书的作者
public:
    string Book_ISBN;   //书的编号
    void creat_book(string isbn, string name, string writer);    //创建图书对象
    void book_show();    //图书信息展示
    void book_alter();   //图书信息修改   
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



//创建图书对象
void Book::creat_book(string isbn = "", string name = "", string writer = "")
{
    cout << "\t\t\t\t**********请依次输入图书的ISBN编号、书名、作者****" << endl;
    cout << "\t\t\t\t编号:";
    cin >> isbn;
    cout << "\t\t\t\t书名:";
    cin >> name;
    cout << "\t\t\t\t作者:";
    cin >> writer;
    this->Book_ISBN = isbn;
    this->Book_name = name;
    this->Book_writer = writer;
}


//图书信息展示
void Book::book_show()
{
    cout << "\t\t\t\t**********Book_ISBN: " << Book_ISBN << "**********" << endl;
    cout << "\t\t\t\t**********Book_name: " << Book_name << "*********" << endl;
    cout << "\t\t\t\t**********Book_writer: " << Book_writer << "**********" << endl;
    cout << endl;
}


//图书信息修改
void Book::book_alter()
{
    int bj;
    cout << "\t\t\t\t**********1.修改图书的编号**********" << endl;
    cout << "\t\t\t\t**********2.修改图书的名字**********" << endl;
    cout << "\t\t\t\t**********3.修改图书的作者**********" << endl;
    cout << "\t\t\t\t请选择要修改的图书信息:";
    cin >> bj;
    switch (bj)
    {
    case 1:
        cout << "\t\t\t\t**********请输入新的图书编号:**********" << endl;
        cin >> Book_ISBN;
        break;
    case 2:
        cout << "\t\t\t\t**********请输入新的图书名字:**********" << endl;
        cin >> Book_name;
        break;
    case 3:
        cout << "\t\t\t\t**********请输入新的图书作者:**********" << endl;
        cin >> Book_writer;
        break;
    }
    cout << endl;
}