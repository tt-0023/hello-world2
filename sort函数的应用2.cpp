#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int a[5]={12,45,33,56,21};
	cout<<"排序前："<<endl;
	for(int i=0;i<5;i++){
		cout<<a[i]<<endl;
	}
	sort(a,a+5);//应传入迭代器范围（begin,end)
	
	cout<<"排序后："<<endl;
	for(int i=0;i<5;i++){
		cout<<a[i]<<endl;
	}
	return 0;
}
