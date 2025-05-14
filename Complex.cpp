/*1、设计一个复数类 Complex 并重载加法运算符：定义复数类 Complex，包含私有成员变量 real（实部，双精度浮点型）和 imag（虚部，双精度浮点型）。
提供有参构造函数用于初始化实部和虚部，以及成员函数 void display () 用于显示复数（格式为 a + bi，若虚部为 0 则只显示实部）。
重载加法运算符 "+"，使其能够实现两个复数相加。
在主程序中创建两个 Complex 对象，进行加法运算，并调用 display () 函数检查结果是否正确。*/
#include<iostream>
#include<string>
using namespace std;
class Complex{
	private:
		 double real;
		 double imag;
		public:
			Complex(double real_=0,double imag_=0):real(real_),imag(imag_){}
			Complex operator+(const Complex&other);
			void display();
};
Complex Complex ::operator+(const Complex&other){
	return Complex(real+other.real,imag+other.imag);
	
}
 void Complex:: display(){
 	cout<<real<<"+"<<imag<<"i"<<endl;
}
int main(){
	Complex a(11,3),b(3,5);
	Complex result=a+b;
	cout<<"结果为"<<endl;
	result.display();
	
	return 0;
	
}
