#include<iostream>
#include<string>
using namespace std;
class Person{
	public:
	virtual 	~Person(){
			cout<<"���ø�����������"<<endl;
		}
};
class Student:public Person{
	public:
		~Student(){
			cout<<"����������������"<<endl;
		}
};
int main(){
	Person *p1=new Person();
	Person *p2=new Student();
	delete p1;
	delete p2;
	return 0;
}
