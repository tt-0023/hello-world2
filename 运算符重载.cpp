#include<iostream>
#include<string>
using namespace std;
class Number{
	public:
		int n;
	Number(int n1_):n(n1_){}
	Number operator+(const Number&other)const{
		return Number(n+other.n);
	}
};
int main(){
	Number a(2);
	Number b(3);
	Number c=a+b;
	cout<<"result:"<<c.n<<endl;
	return 0;
}
