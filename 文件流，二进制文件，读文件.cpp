#include<iostream>
#include<fstream>
using namespace std;
 class Person{
 	public:
 	char m_name[64];
 	int m_age;
 };
 void test(){
 	ifstream ifs;
 	ifs.open("Person.txt",ios::in|ios::binary);
 	if(!ifs.is_open()){
	 	cout<<"文件打开失败"<<endl;
	 }
	 Person p;
	 ifs.read((char *)&p,sizeof(Person));
	 cout<<"name:"<<p.m_name<<"age:"<<p.m_age<<endl;
	 ifs.close();
 }
 int main(){
 	test();
 	return 0;
 }
