#include<iostream>
using namespace std;
long fatorial(int n){
	if(n==0||n==1){
		return 1;
	}else{
		return n*fatorial(n-1);
	}
}
int main(){
	int num;
	cin>>num;
	cout<<"������һ������"<<num<<endl;
	cout<<"������Ľײ�Ϊ��"<<fatorial(num)<<endl;
	
}
