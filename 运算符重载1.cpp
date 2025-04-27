#include<iostream>
#include<string>
using namespace std;
class Vector2D{
	public:
		int x,y;
		Vector2D(int x_,int y_):x(x_),y(y_){}
		Vector2D operator+(const Vector2D &other)const{
			return Vector2D(x+other.x,y+other.y);
			
		}
		Vector2D operator-(const Vector2D &other)const{
			return Vector2D(x-other.x,y-other.y);}
	    Vector2D operator*(const Vector2D &other)const{
			return Vector2D(x*other.x,y*other.y);
	    }
		void print(ostream&os)const{
			os<<"("<<x<<","<<y<<")";
		}			
};
int main(){
	Vector2D v1(3,4);
	Vector2D v2(1,2);
	Vector2D sum=v1+v2;
	Vector2D diff=v1-v2;
	cout<<"sum:";
	sum.print(cout);
	cout<<endl;
	cout<<"diff:";
	diff.print(cout);
	cout<<endl;
	return 0;
	
	
}
