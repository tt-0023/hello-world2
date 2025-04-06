#include<iostream>
#include<string>
using namespace std;
//判断一个点是否在圆内；
class Point{
	public:
		double x;
		double y;
};
class Circle{
	public:
		double radius;
		Point central;
	bool contains(Point point){
		double dis=(central.x-point.x)*(central.x-point.x)+(central.y-point.y)*(central.y-point.y);
		return dis<radius*radius;
	}
};
int main(){
	Point p;
	p.x=3;
	p.y=4;
	Circle c;
	c.radius=2;
	c.central.x=3;
	c.central.y=2;
	cout<<c.contains(p)<<endl;
	
	return 0;
}
