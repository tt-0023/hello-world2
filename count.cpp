//	���һ�� Student �࣬Ҫ�󣺰�����ͨ��Ա������name����������id��ѧ�ţ���������̬��Ա���� count������ͳ�Ƴ����е�ǰ���ڵ� Student �����������ڹ��캯���е��������������еݼ�����
//�ṩ��̬��Ա���� getStudentCount()�����ص�ǰѧ������������
//��д��������ԣ��������ѧ��������֤ count ����ȷ�ԡ�
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
		cout<<"��ǰ����Ϊ��"<<count<<endl;
		
	}
	
	~Student(){
		count--;
		cout<<"��ǰ����Ϊ��"<<count<<endl;
	}
  static 	int getStudentCount(){
			return count;
		}
	void display(){
		cout<<"������"<<name<<"ѧ�ţ�"<<id<<endl;
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
