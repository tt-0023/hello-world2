/*
4�����һ��ͼ����Ϣ�� Book��ͨ����������ͳ�������ʵ�ֶ�ͼ����Ϣ�İ�ȫ���ʺ͹���Ҫ��
˽�����ݳ�Ա��title����������author�����ߣ���isbn��ISBN�ţ�
���캯����Book(string title, string author, string isbn)����ʼ��ͼ����Ϣ��
����Ա������string getTitle() const������������
string getAuthor() const���������ߡ�
string getISBN() const������ISBN�š�
�ǳ���Ա��������ѡ����
void setTitle(string title)������������
void setAuthor(string author)���������ߡ�
void setISBN(string isbn)������ISBN�š�
��̬��Ա������
void displayBook(const Book& book)��ͨ������������ʾͼ����Ϣ��
��д��������ԣ�
����һ���������� book1��
���ó���Ա������ȡ���������ߺ�ISBN�š�
����һ���ǳ������� book2��
���ó���Ա������ȡ���������ߺ�ISBN�š�
���÷ǳ���Ա�����޸����������ߺ�ISBN�š�
���þ�̬��Ա���� displayBook�����ݳ������� book1�ͷǳ������� book2��
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
			cout<<"������"<<book.getTitle()<<endl;
			cout<<"���ߣ�"<<book.getAuthor()<<endl;
			cout<<"ISBN�ţ�"<<book.getISBN()<<endl;
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
 const 	Book book1("��¥��","��ѩ��","9787");
	cout<<"����:"<<book1.getTitle()<<endl;
	cout<<"��������"<<book1.getAuthor()<<endl;
	cout<<"ISBN��"<<book1.getISBN()<<endl;
	Book book2("���μ�","��ж�","2376");
	cout<<"������"<<book2.getTitle()<<endl;
	cout<<"��������"<<book2.getAuthor()<<endl;
	cout<<"ISBN�ţ�"<<book2.getISBN()<<endl;
	book2.setTitle("��������");
	book2.setAuthor("�޹���");
	book2.setISBN("2457");
	Book::displayBook(book1);
	Book::displayBook(book2);
	return 0;
	
	
	
}


