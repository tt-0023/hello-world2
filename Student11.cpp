/*����һ��ѧ����Student������˽�г�Ա����name���ַ���string����age������int����score��������float����
�ṩ���캯����ʼ����Ա��������Ա����void display()�������ѧ����Ϣ��Ҫ��ʹ�ø�ʽ���Ʒ�ʵ������Ч����
��������룬ռ 10 ���ַ���ȣ�
�����Ҷ��룬ռ 3 ���ַ���ȣ� 
�ɼ�������λС������ʾΪ�����ŵĸ���������+90.50����
���������д���Student���󣬵���display()��������֤�����ʽ�Ƿ���ȷ��
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
