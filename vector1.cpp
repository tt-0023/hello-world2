//���һ�� Vector �࣬Ҫ��
//ʵ����Ԫ���� dotProduct �������������ĵ������ʽ��v1.xv2.x + v1.yv2.y��
#include<iostream>
#include<string>
using namespace std;
class Vector{
	private:
		int x;
		int y;
	public:
	friend  int doProduct(  Vector&v1, Vector&v2);
	Vector(int x1,int y1){
		x=x1;
		y=y1;
	}
};
 int doProduct( Vector&v1, Vector&v2){
 	 return v1.x*v2.x+v1.y*v2.y;
 	  }
int main(){
	Vector a(3,6),b(6,9);
	cout<<"���������ĵ��Ϊ��"<<doProduct(a,b)<<endl;
	return 0;
	
}
