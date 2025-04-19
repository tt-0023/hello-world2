#include<iostream>
#include<string>
using namespace std;
class A{
	public:
		A(){cout<<"1";}
		~A(){cout<<"2";}
};
class B:public A{
	public:
	B(){cout<<"3";}
	~B(){cout<<"4";}
};
int main(){
	B b;
	
}
//执行顺序：先构造后析构，
//构造先基类后派生，析构先派生后基类;
