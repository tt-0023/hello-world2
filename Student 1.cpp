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
			cout<<"ѧ�ţ�"<<num<<endl;
			cout<<"������"<<name<<endl;
			cout<<"�ɼ���"<<score<<endl;
			return score;
		}
		~Student(){
			
		}
};
int main(){
	Student s[5];
	float sum=0;
	for(int i=0;i<5;i++){
		cout<<"�������"<<i+1<<"��ѧ����ѧ�ţ��������ɼ���";
		s[i].input();
			}
	for(int i=0; i<5;i++){
		sum+=s[i].grade();
	}
	cout<<"ƽ���ɼ�Ϊ��"<<sum/5<<endl;
	return 0;	
}
