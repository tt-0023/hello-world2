/*
4、设计一个图书信息类 Book，通过常量对象和常量引用实现对图书信息的安全访问和管理。要求：
私有数据成员：title（书名）、author（作者）、isbn（ISBN号）
构造函数：Book(string title, string author, string isbn)：初始化图书信息。
常成员函数：string getTitle() const：返回书名。
string getAuthor() const：返回作者。
string getISBN() const：返回ISBN号。
非常成员函数（可选）：
void setTitle(string title)：设置书名。
void setAuthor(string author)：设置作者。
void setISBN(string isbn)：设置ISBN号。
静态成员函数：
void displayBook(const Book& book)：通过常量引用显示图书信息。
编写主程序测试：
创建一个常量对象 book1：
调用常成员函数获取书名、作者和ISBN号。
创建一个非常量对象 book2：
调用常成员函数获取书名、作者和ISBN号。
调用非常成员函数修改书名、作者和ISBN号。
调用静态成员函数 displayBook，传递常量对象 book1和非常量对象 book2：
     Book::displayBook(book1);
     Book::displayBook(book2); */
#include<iostream>
#include<string>
using namespace std;
class Book{
	private:
		string title;
		string author;
		string isbn;
	public:
		Book(string t,string a,string i):title(t),author(a),isbn(i){}
		string getTitle()const{
			return title;
		}
		string getAuthor()const{
			return author;
		}
		string getISBN()const{
			return isbn;
		}
		static void displayBook(const Book&book){
			cout<<"书名；"<<book.getTitle()<<endl;
			cout<<"作者："<<book.getAuthor()<<endl;
			cout<<"ISBN号："<<book.getISBN()<<endl;
				};
		
void setTitle(string t){
	title=t;
};
void setAuthor(string a){
	author=a;
};
void setISBN(string i){
	isbn=i;
};
};
int main(){
 const 	Book book1("红楼梦","曹雪芹","9787");
	cout<<"书名:"<<book1.getTitle()<<endl;
	cout<<"作者名："<<book1.getAuthor()<<endl;
	cout<<"ISBN号"<<book1.getISBN()<<endl;
	Book book2("西游记","吴承恩","2376");
	cout<<"书名："<<book2.getTitle()<<endl;
	cout<<"作者名："<<book2.getAuthor()<<endl;
	cout<<"ISBN号："<<book2.getISBN()<<endl;
	book2.setTitle("三国演义");
	book2.setAuthor("罗贯中");
	book2.setISBN("2457");
	Book::displayBook(book1);
	Book::displayBook(book2);
	return 0;
	
	
	
}


