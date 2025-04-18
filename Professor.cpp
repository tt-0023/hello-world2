#include<iostream>
#include<string>
using namespace std;
class BirthDate{
	private:
		int year;
		int month;
		int day;
	public:
		BirthDate(int y,int m,int d):year(y),month(m),day(d){}
		 void showBirthDate(){
		 	cout<<"year:"<<year<<"month:"<<month<<"day:"<<day<<endl;
		 }
};
class Teacher:public BirthDate{
	private:
		int num;
		string  name;
		string  sex;
	public:
		Teacher(int y,int m,int d,int nu,string na,string s): BirthDate(y,m,d),num(nu),name(na),sex(s){}
		void showTeacher(){
			showBirthDate();
			cout<<"num:"<<num<<"name:"<<name<<"sex"<<sex<<endl;
		}
};
class Professor:public Teacher{
	private:
		string reacher;
	public:
		Professor(int y,int m,int d,int nu,string na,string s,string r):Teacher(y,m,d,nu,na,s),reacher(r){}
	  void display(){
	  	showTeacher();
	  	cout<<"reacher:"<<reacher<<endl;
	  }
};
int main(){
	Professor prof(1976,3,24,12232,"zhangsan","max","math");
	prof.display();
	return 0;

	
	
	
}
