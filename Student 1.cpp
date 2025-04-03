#include<iostream>
#include<string>
using namespace std;
class Student{
	private:
		int num;
		string name;
		double score;
	public:
		Student(int n1, string n2,double s){
			num=n1;
			name=n2;
			score=s;
			}
			Student(){
				
			}
		void input(){
			cin>>num >>name>>score;
		}
		float grade(){
			cout<<"学号："<<num<<endl;
			cout<<"姓名："<<name<<endl;
			cout<<"成绩："<<score<<endl;
			return score;
		}
		~Student(){
			
		}
};
int main(){
	Student s[5];
	float sum=0;
	for(int i=0;i<5;i++){
		cout<<"请输入第"<<i+1<<"个学生的学号，姓名，成绩：";
		s[i].input();
			}
	for(int i=0; i<5;i++){
		sum+=s[i].grade();
	}
	cout<<"平均成绩为："<<sum/5<<endl;
	return 0;	
}
