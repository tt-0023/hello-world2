/*ʵ��һ��StudentBase�࣬����Ҫ�����£�
���Ա������const string studentId��ѧ�ţ�����ͨ�����캯����ʼ������string name��ѧ����������const int admissionYear����ѧ��ݣ�����ͨ�����캯����ʼ������
��Ҫʵ�ֵĳ�Ա������
���캯����StudentBase(const string& id, const string& n, int year
����Ա������void displayInfo() const����ʾѧ�š���������ѧ��ݣ�
��ͨ��Ա������void setName(const string& newName)���޸�ѧ��������
��д��������ԣ�
����������const StudentBase stu1("S001", "����", 2023)
�����ǳ�����StudentBase stu2("S002", "����", 2023)
����displayInfo()��ʾ�����������Ϣ
����setName()�޸�stu2������
�����޸�stu1��������Ӧ�����������
�����޸�stu1��studentId��Ӧ�����������*/
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
		cout<<"ѧ��"<<studentID<<endl;
		cout<<"����"<<name<<endl;
	    cout<<"��ѧ���"<<admissionYear<<endl;
		}
	void setName(const string& newName){
		name=newName;
	}
	string getName(){
		return name;
		
	}
};
int main(){
	const StudentBase stu1("s001","����",2023);
	StudentBase stu2("s002","����",2023);
	stu1.displayInfo();
	stu2.displayInfo();
	stu2.setName("����");
	cout<<"�޸ĺ������"<<stu2.getName()<<endl;
//	stu1.setName("xiaobai");
//	stu1.studentID="2022";
	
	
	return 0;
	
	
	
	
	
	
	
	
}
