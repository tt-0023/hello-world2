#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int a[5]={12,45,33,56,21};
	cout<<"����ǰ��"<<endl;
	for(int i=0;i<5;i++){
		cout<<a[i]<<endl;
	}
	sort(a,a+5);//Ӧ�����������Χ��begin,end)
	
	cout<<"�����"<<endl;
	for(int i=0;i<5;i++){
		cout<<a[i]<<endl;
	}
	return 0;
}
