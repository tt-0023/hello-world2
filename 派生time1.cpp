#include<iostream>
#include<string>
using namespace std;
class Clock{
	protected:
		int hour;
		int minute;
		int secound;
	public:
		Clock(int h,int min,int sec):hour(h),minute(min),secound(sec){
			cout<<"Clock函数构造被调用"<<endl;
		}
		void showClock(){
			cout<<"hour:"<<hour<<endl;
			cout<<"minute:"<<minute<<endl;
			cout<<"secound："<<secound<<endl;
		}
		~Clock(){
			cout<<"Clock函数析构被调用"<<endl;
		}
		
};
class Time: public Clock{
	protected:
		int year;
		int month;
		int date;
	public:
		Time(int h,int min,int sec,int y,int m,int d):Clock(h,min,sec){
			year=y;
			month=m;
			date=d;
		cout<<"Time函数构造被调用"<<endl;
		}
		void showTime(){
			showClock();
			cout<<"year:"<<year<<endl;
			cout<<"month:"<<month<<endl;
			cout<<"date:"<<date<<endl;
		}
		~Time(){
			cout<<"Time函数被析构"<<endl;
		}	
};
class Date:public Time {
	protected:
		string week;
	public:
		Date(int h,int min,int sec,int y,int m,int d,string w): Time(h,min,sec,y,m,d){
			week=w;
		cout<<"Date构造函数被调用"<<endl;
		}
		void showDate(){
			showTime();
			cout<<"week:"<<week<<endl;
		}
		~Date(){
			cout<<"Date析构函数被调用"<<endl;
		}
		
};
int main(){
	Date a(12,30,0,2025,4,17,"星期四");
	a.showDate();
	return 0;
}
