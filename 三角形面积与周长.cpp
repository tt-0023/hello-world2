#include<iostream>
#include<string>
#include<cmath>
using namespace std;
class triangle{
	private:
		double a;
		double b;
		double c;
	public:
		triangle(double a_,double b_,double c_):a(a_),b(b_),c(c_){};
		~triangle(){
			cout<<"delect student"<<endl;
		}
		 double area(){
		 	double  p;
		 	p=(a+b+c)/2;
		 	 return sqrt(p*(p-a)*(p-b)*(p-c));
		 }
		 double perimeter(){
		 	return a+b+c;
		 }
		void check(){
			if(a+b<=c||a+c<=b||b+c<=a){
				throw  a+b;}
				else 
				cout<<"三角形的面积为："<<area()<<endl;
				cout<<"三角形的周长为："<<perimeter()<<endl;
		}
};
int main(){
	try {triangle s1(3,4,5);
	s1.check();
	triangle s2 (2,3,5);
	s2.check();}
	catch(double){
		cout<<"error,两边之和小于第三边"<<endl;
		
	}
	return  0;
	
	}
	
