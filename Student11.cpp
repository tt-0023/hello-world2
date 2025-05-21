/*定义一个学生类Student，包含私有成员变量name（字符串string）、age（整数int）、score（浮点数float）。
提供构造函数初始化成员变量，成员函数void display()用于输出学生信息，要求使用格式控制符实现以下效果：
姓名左对齐，占 10 个字符宽度；
年龄右对齐，占 3 个字符宽度； 
成绩保留两位小数，显示为带符号的浮点数（如+90.50）。
在主程序中创建Student对象，调用display()函数，验证输出格式是否正确。
*/
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class Student{
	private:
		string m_name;
		int m_age;
		float m_score;
	public:
		Student(string name,int age,float score):m_name(name),m_age(age),m_score(score){}
		void display(){
			cout<<left<<setw(10)<<m_name;
			cout<<right<<setw(3)<<m_age<<"  ";
			cout<<showpos<<fixed<<setprecision(2)<<m_score<<endl;
			 cout << noshowpos;
		}
};
int main(){
	Student a("xiaobai",18,96.5f),b("xiaohei",19,93.75f);
	a.display();
	b.display();
	return 0;
	
}
