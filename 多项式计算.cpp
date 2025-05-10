#include<iostream>
#include<ctime>
#include<cmath>
clock_t start,stop;
double duration;
#define MAXN 10
#define MAXK 10000000
using namespace std;//����Ž׶���ʽ
double f1(int n,double a[],double x){
	int i;
	double p=a[0];
     for(i=1;i<=n;i++){
		p+=(a[i]*pow(x,i));}
	return p;
}
double f2(int n,double a[],double x){
	int i;
	double p=a[n];
	for(i=n;i>0;i--){
		p=a[i-1]+x*p;}
		return p;//f2Ϊ�ؾ����㷨
	
}
int main(){
	int i;
	double a[MAXN];
	for(i=0;i<MAXN;i++){
		a[i]=(double)i;
	}//�������ʽϵ��
	start=clock();
	for(i=0;i<MAXK;i++)
	f1(MAXN-1,a,1.1);
	stop=clock();
	duration=((double)(stop-start))/CLOCKS_PER_SEC/MAXK;
	cout<<"tick1= \n"<<(double)(stop-start)<<endl;
	cout<<"duration= "<<duration<<endl;
	start=clock();
	for(i=0;i<MAXK;i++)
	f2(MAXN-1,a,1.1);
	stop=clock();
	duration=((double)(stop-start))/CLOCKS_PER_SEC/MAXK;
	cout<<"tick2= \n"<<(double)(stop-start)<<endl;
	cout<<"duration= "<<duration<<endl;
	return 0;
	
	
}


