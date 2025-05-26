/*2.	编程实现：声明三角形类Triangle，包含属性为3条边长，类型为int，提供构成员函数void getvalue()实现从键盘上输入3条边长，
对于输入三角形的三边长若不能构成三角形，则进行异常处理输出有关的警告信息，提供成员函数int getperimeter()求三角形的周长。
在main函数中创建两个对象，分别调用getvalue()输入边长，一个对象输入错误信息验证异常处理是否有效，
一个对象输入正确信息并调用getperimeter()函数求三角形周长并输出。
*/
#include<iostream>
using namespace std;
class Triangle{
	public:
		int a;
		int b;
		int c;
	void getvalue(){
		cin>>a>>b>>c;
	}
	void  div(){
		if(a+b<c||a-b>c){
			throw "error";
		}
	}
	int getperimeter(){
		return a+b+c;
	}
};
int main(){
	Triangle s;
	s.getvalue();
	s.div();
	s.getperimeter();
	Triangle s1;
	s1.getperimeter();
	s1.div();
	s1.getperimeter();
	return 0;
	
}
