/*2、设计一个分数类 Fraction 并重载乘法运算符：创建分数类 Fraction，包含私有成员变量 numerator（分子，整型）和 denominator（分母，整型）。
编写有参构造函数对分子和分母进行初始化，并在构造函数中处理分母为 0 的情况（如抛出异常）。
提供成员函数 void simplify () 用于化简分数（将分子和分母同时除以它们的最大公约数），以及 void display () 用于显示分数（格式为 a/b）。
重载乘法运算符 "*"，实现两个分数相乘，并在相乘后调用 simplify () 函数化简结果。
在主程序中创建两个 Fraction 对象，执行乘法运算，再调用 display () 函数验证结果。
*/
#include<iostream>
#include<string>
using namespace std;
class Fraction{
	private:
		int numerator;
		int denominator;
		int gcd(int a,int b) {return b==0?a:gcd(b,a%b);}
	public:
		Fraction(int n,int d){
			numerator=n;
			denominator=d;}
		Fraction operator*(const Fraction& other){
			return Fraction(numerator*other.numerator,denominator*other.denominator);
		}
		void simplify(){
			int c=gcd(abs(numerator),abs(denominator));
			numerator=numerator/c;
			denominator=denominator/c;
		
		}
		void display(){
			cout<<"result:"<<numerator<<"/"<<denominator<<endl;
		}
		
};
int main(){
	Fraction a(11,2),b(3,3);
	Fraction c=a*b;
	c.simplify();
	c.display();
	return 0;	
}
