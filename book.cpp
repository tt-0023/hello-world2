/*����Book�࣬����isbn������ int����title���ַ���string����price��������double����Ա�������ṩ�вι��캯�����޲ι��캯����ʼ����Ա����,��Ա����void display()��������鱾��Ϣ��
���������д���Book����book1�������вι��캯����ʼ���������ļ����������outfileִ�ж������ļ���д�����,������book1�еĳ�ʼ����Ϣд��������ļ�book.dat
����Book����book2�������޲ι��캯����ʼ���������ļ�����������infileִ�ж������ļ��Ķ�ȡ����������ȡ��Ϣ���浽����book2�ϣ�����display����������֤���������ԡ�
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
	Book book1(17843,"��¥��",56);
	ofstream outfile("book.dat",ios::out|ios::binary);
	if(outfile){
		cout<<"�ļ��Ѵ�"<<endl;
	}else{
		cout<<"�ļ�δ��"<<endl;
	}
	outfile.write((char*)&book1,sizeof(book1));
	outfile.close();
	Book book2;
	ifstream infile("book.dat",ios::in);
	infile.read((char*)&book2,sizeof(book2));
	book2.display();
	return 0;
	}
