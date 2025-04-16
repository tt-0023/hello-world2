#include<iostream>
#include<string>
using namespace std;
int add(int a,int b);
int main(){
	int m,n;
	m=3;n=4;
	int s;
	s=add(m,n);
	cout<<"m+n="<<s<<endl;
	return 0;
} 
int add(int a,int b){
	return a+b;
}
