/*定义Book类，包含isbn（整型 int）、title（字符串string）、price（浮点数double）成员变量，提供有参构造函数和无参构造函数初始化成员变量,成员函数void display()用于输出书本信息。
在主程序中创建Book对象book1，调用有参构造函数初始化，创建文件输出流对象outfile执行二进制文件的写入操作,将对象book1中的初始化信息写入二进制文件book.dat
创建Book对象book2，调用无参构造函数初始化，创建文件输入流对象infile执行二进制文件的读取操作，将读取信息储存到对象book2上，调用display（）函数验证数据完整性。
*/
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class Book{
	public:
		int isbn;
		string  title;
		double price;
		Book(int i,string t,double p):isbn(i),title(t),price(p){}
		Book(){}
		void display(){
			cout<<"isbn:"<<isbn<<endl;
			cout<<"title:"<<title<<endl;
			cout<<"price:"<<price<<endl;
			
		}
};
int main(){
	Book book1(17843,"红楼梦",56);
	ofstream outfile("book.dat",ios::out|ios::binary);
	if(outfile){
		cout<<"文件已打开"<<endl;
	}else{
		cout<<"文件未打开"<<endl;
	}
	outfile.write((char*)&book1,sizeof(book1));
	outfile.close();
	Book book2;
	ifstream infile("book.dat",ios::in);
	infile.read((char*)&book2,sizeof(book2));
	book2.display();
	return 0;
	}
