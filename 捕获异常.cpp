#include<iostream>
#include<string>
using namespace std;
 float div(float a,float b){
 	if(b==0) throw b;
 	return a/b;
 	
 }
 int main (){
 	float a,b;
 	cin>>a>>b;
 	try{
	 	cout<<div(a,b)<<endl;
	 }
	 catch(float){
	 	cout<<"³ýÊýÎª0"<<endl;
	 }
	 return 0;

 }
