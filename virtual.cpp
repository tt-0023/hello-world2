#include<iostream>
#include<string>
using namespace std;
class Person{
	protected:
		string name;
		int age;
	public:
		Person(string na,int a):name(na),age(a){}
	virtual	void display(){
			
			cout<<"name:"<<name<<endl;
			cout<<"age:"<<age<<endl;
		}
};
class Student :public Person{
	private:
		int num;
	public:
		Student(string na,int a,int nu):Person(na,a),num(nu){}
		void display(){
			cout<<"name:"<<name<<"age:"<<age<<"num:"<<num<<endl;
		}
		
};
int main(){
	Person a("xiaoming",23);
	Student b("xiaowang",19,20241001);
	Person *p1=&a;
	Person *p2=&b;
	p1->display();
	p2->display();
	return 0;
	
}
