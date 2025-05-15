/*2�����һ�������� Fraction �����س˷������������������ Fraction������˽�г�Ա���� numerator�����ӣ����ͣ��� denominator����ĸ�����ͣ���
��д�вι��캯���Է��Ӻͷ�ĸ���г�ʼ�������ڹ��캯���д����ĸΪ 0 ����������׳��쳣����
�ṩ��Ա���� void simplify () ���ڻ�������������Ӻͷ�ĸͬʱ�������ǵ����Լ�������Լ� void display () ������ʾ��������ʽΪ a/b����
���س˷������ "*"��ʵ������������ˣ�������˺���� simplify () ������������
���������д������� Fraction ����ִ�г˷����㣬�ٵ��� display () ������֤�����
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
