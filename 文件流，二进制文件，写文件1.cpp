#include<iostream>
#include<fstream>
using namespace std;
class Person{
	public:
		char m_name[64];
		int m_age;
	};
	void test(){
		ofstream ofs;
		ofs.open("Person.txt", ios::out|ios::binary);
		Person p={"zhangsan",18};
		ofs.write((const char*)&p,sizeof(Person));
		ofs.close();
	}
	int main(){
		test();
		return 0;
		
	}
	
	
