#include<iostream>
using namespace std;
class Cirecle{
	private:
		double r;
	public:
		Cirecle(double a){
			r=a;
		}
	double area(){
		return 3.14*r*r;
	}
	double perimeter(){
		return 2*3.14*r;
	}
	void show(){
		cout<<"Բ�����Ϊ��"<<area()<<endl;
		cout<<"Բ���ܳ�Ϊ��"<<perimeter()<<endl;
	}
};
int main(){
	Cirecle c1(2.22);
     c1.show();
     return 0;
	
}
