/*实现一个StudentBase类，具体要求如下：
类成员变量：const string studentId（学号，必须通过构造函数初始化）、string name（学生姓名）、const int admissionYear（入学年份，必须通过构造函数初始化）。
需要实现的成员函数：
构造函数：StudentBase(const string& id, const string& n, int year
常成员函数：void displayInfo() const（显示学号、姓名和入学年份）
普通成员函数：void setName(const string& newName)（修改学生姓名）
编写主程序测试：
创建常对象：const StudentBase stu1("S001", "张三", 2023)
创建非常对象：StudentBase stu2("S002", "李四", 2023)
调用displayInfo()显示两个对象的信息
调用setName()修改stu2的姓名
尝试修改stu1的姓名（应产生编译错误）
尝试修改stu1的studentId（应产生编译错误）*/
#include<iostream>
#include<string>
using namespace std;
class StudentBase{
	private:
		const string studentID;
		string name;
		const int admissionYear;
	public:
		StudentBase(const string & id,const string& n,int year): studentID(id),name(n),admissionYear(year){}
		
	void displayInfo()const {
		cout<<"学号"<<studentID<<endl;
		cout<<"姓名"<<name<<endl;
	    cout<<"入学年份"<<admissionYear<<endl;
		}
	void setName(const string& newName){
		name=newName;
	}
	string getName(){
		return name;
		
	}
};
int main(){
	const StudentBase stu1("s001","张三",2023);
	StudentBase stu2("s002","李四",2023);
	stu1.displayInfo();
	stu2.displayInfo();
	stu2.setName("王五");
	cout<<"修改后的名字"<<stu2.getName()<<endl;
//	stu1.setName("xiaobai");
//	stu1.studentID="2022";
	
	
	return 0;
	
	
	
	
	
	
	
	
}
