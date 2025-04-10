//	设计一个 Student 类，要求：包含普通成员变量：name（姓名）、id（学号）；包含静态成员变量 count，用于统计程序中当前存在的 Student 对象总数（在构造函数中递增，析构函数中递减）。
//提供静态成员函数 getStudentCount()，返回当前学生对象总数。
//编写主程序测试：创建多个学生对象，验证 count 的正确性。
#include<iostream>
#include<string>
using namespace std;
class Student{
	public:
		string name;
		int id;
	static	int count;
	Student(string n , int id):name(n),id(id){
				count++;
		cout<<"当前总数为："<<count<<endl;
		
	}
	
	~Student(){
		count--;
		cout<<"当前总数为："<<count<<endl;
	}
  static 	int getStudentCount(){
			return count;
		}
	void display(){
		cout<<"姓名："<<name<<"学号："<<id<<endl;
	}
};
int Student::count=0;
int main(){
	Student s1("xiaoming",0001);
	s1.display();
	Student s2("xiaobai",0002);
	s2.display();
	Student s3("dabai",0003);
	s3.display();
	cout<<Student::getStudentCount();
	return 0;
	
	
	return 0;
	
	
	
	
	
}
