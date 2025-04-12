/*设计一个 BankAccount 类，要求：

包含普通成员变量 accountId（账户ID）和 balance（余额）。

使用静态成员变量 totalAccounts 统计系统中存在的账户总数（构造函数+1，析构函数-1）。

提供静态成员函数 getTotalAccounts() 返回当前账户总数。

编写主程序测试：创建多个账户对象，验证 totalAccounts 的正确性，并在对象销毁时观察计数变化。
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
			cout<<"此时的账户数为："<<totalAccounts<<endl;
		}
		~BankAccount(){
			totalAccounts--;
			cout<<"此时的账户数为："<<totalAccounts<<endl;
			
		}
		static int getTotalAccounts(){
			return totalAccounts;
			}
		void display(){
			cout<<"账户；"<<accountID<<"余额："<<balance<<endl;
		}
		
};
 int BankAccount::totalAccounts=0;
 int main(){
 	BankAccount s1("张三",4999.56);
 	BankAccount s2("李四",3668.99);
 	cout<<"当前账上总户："<<BankAccount::getTotalAccounts()<<endl;
 	return 0;
 	
 	
 }
