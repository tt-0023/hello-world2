/*����һ��Employee�࣬����id������int����name���ַ���string����salary��˫���ȸ�����double����Ա������
ʹ���ļ��������ofstream����Ա����Ϣд���ı��ļ�employee.txt��ÿ�д洢һ����¼���ֶμ��ö��ŷָ�����1,Alice,8000.00����
ʹ���ļ���������ifstream����ȡ�ļ����ݣ������Ա����Ϣ��*/
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
		  cout << "����: ";
		    cin >> m_id;
		    cout << "����: ";
		    cin>>m_name;
		    cout << "нˮ: ";
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
		cout<<"�������"<<i+1<<"��Ա���Ĺ��ţ�������нˮ��"<<endl;
		emp[i].setempvalue();
			}
	ofstream outfile("employee.txt",ios::out);
	if(outfile){
		cout<<"�ļ��򿪳ɹ�"<<endl;
	}else{
		cout<<"�ļ���ʧ��"<<endl;
	}
	for(int i = 0; i < 5; i++) {
	        emp[i].writeToFile(outfile);
	    }
	outfile.close();
	ifstream infile("employee.txt",ios::in);
	if(infile){
		cout<<"�ļ��򿪳ɹ�"<<endl;
	}else{
		cout<<"�ļ���ʧ��"<<endl;
	}
	for(int i = 0; i < 5; i++) {
		emp[i].readFromFile(infile);
			cout << "��ȡ�ĵ�" << i+1 << "��Ա����Ϣ: ";
            emp[i].display();}
		infile.close();
	return 0;
	
	
	
}
