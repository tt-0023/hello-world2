/*创建一个Employee类，包含id（整数int）、name（字符串string）、salary（双精度浮点数double）成员变量。
使用文件输出流（ofstream）将员工信息写入文本文件employee.txt，每行存储一条记录，字段间用逗号分隔（如1,Alice,8000.00）。
使用文件输入流（ifstream）读取文件内容，并输出员工信息。*/
#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
class Employee{
	public:
		int m_id;
		string m_name;
		double m_salary;
		void setempvalue(){
		  cout << "工号: ";
		    cin >> m_id;
		    cout << "姓名: ";
		    cin>>m_name;
		    cout << "薪水: ";
		    cin >> m_salary;
		}
		 void writeToFile(ofstream& outfile) {
		        outfile << m_id << "," << m_name << "," << fixed << setprecision(2)<< m_salary << endl;
		    }
		    void readFromFile(ifstream& infile) {
			        infile >> m_id;
			        infile>>m_name;
			        infile >> m_salary;
			    }
			 void display() {
			        cout << "ID: " << m_id << " Name: " << m_name 
			             << " Salary: " << fixed << setprecision(2) << m_salary << endl;
			    }
		    
};
int main(){
	Employee emp[5];
	int i;
	for(i=0;i<5;i++){
		cout<<"请输入第"<<i+1<<"个员工的工号，姓名，薪水："<<endl;
		emp[i].setempvalue();
			}
	ofstream outfile("employee.txt",ios::out);
	if(outfile){
		cout<<"文件打开成功"<<endl;
	}else{
		cout<<"文件打开失败"<<endl;
	}
	for(int i = 0; i < 5; i++) {
	        emp[i].writeToFile(outfile);
	    }
	outfile.close();
	ifstream infile("employee.txt",ios::in);
	if(infile){
		cout<<"文件打开成功"<<endl;
	}else{
		cout<<"文件打开失败"<<endl;
	}
	for(int i = 0; i < 5; i++) {
		emp[i].readFromFile(infile);
			cout << "读取的第" << i+1 << "个员工信息: ";
            emp[i].display();}
		infile.close();
	return 0;
	
	
	
}
