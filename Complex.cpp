/*1�����һ�������� Complex �����ؼӷ�����������帴���� Complex������˽�г�Ա���� real��ʵ����˫���ȸ����ͣ��� imag���鲿��˫���ȸ����ͣ���
�ṩ�вι��캯�����ڳ�ʼ��ʵ�����鲿���Լ���Ա���� void display () ������ʾ��������ʽΪ a + bi�����鲿Ϊ 0 ��ֻ��ʾʵ������
���ؼӷ������ "+"��ʹ���ܹ�ʵ������������ӡ�
���������д������� Complex ���󣬽��мӷ����㣬������ display () ����������Ƿ���ȷ��*/
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
	cout<<"���Ϊ"<<endl;
	result.display();
	
	return 0;
	
}
