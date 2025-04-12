/*���һ�� BankAccount �࣬Ҫ��

������ͨ��Ա���� accountId���˻�ID���� balance������

ʹ�þ�̬��Ա���� totalAccounts ͳ��ϵͳ�д��ڵ��˻����������캯��+1����������-1����

�ṩ��̬��Ա���� getTotalAccounts() ���ص�ǰ�˻�������

��д��������ԣ���������˻�������֤ totalAccounts ����ȷ�ԣ����ڶ�������ʱ�۲�����仯��
*/
#include<iostream>
#include<string>
using namespace std;
class BankAccount{
	private:
		string accountID;
		double balance;
		static int totalAccounts;
	public:
		BankAccount(string a,double b):accountID(a),balance(b){
			totalAccounts++;
			cout<<"��ʱ���˻���Ϊ��"<<totalAccounts<<endl;
		}
		~BankAccount(){
			totalAccounts--;
			cout<<"��ʱ���˻���Ϊ��"<<totalAccounts<<endl;
			
		}
		static int getTotalAccounts(){
			return totalAccounts;
			}
		void display(){
			cout<<"�˻���"<<accountID<<"��"<<balance<<endl;
		}
		
};
 int BankAccount::totalAccounts=0;
 int main(){
 	BankAccount s1("����",4999.56);
 	BankAccount s2("����",3668.99);
 	cout<<"��ǰ�����ܻ���"<<BankAccount::getTotalAccounts()<<endl;
 	return 0;
 	
 	
 }
