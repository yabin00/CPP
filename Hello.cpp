#include <iostream>
#include <cstring>
using namespace std;


struct Books
{
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
} book;
int main()
{
    Books books1;
    Books book2;
    strcpy(books1.title,"C++教程");
    strcpy(books1.author,"name");
    strcpy(books1.subject,"编程语言");
    books1.book_id=12345;
    cout << "第一本书标题 : " << books1.title <<endl;
    cout << "第一本书作者 : " << books1.author <<endl;
    cout << "第一本书类目 : " << books1.subject <<endl;
    cout << "第一本书 ID : " << books1.book_id <<endl;
    cout << "Hello, world!" << endl;
    return 0;
}