#include<iostream>
using namespace std;
class BOX{
	private:
		int length;
		int weight;
		int height;
	public:
	 BOX(int len,int w, int h){
	 	length=len;
	 	weight=w;
	 	height=h;
	 }
	 int volume(){
	 	return length*weight*height;
	 }
};
int  main(){
    BOX box1(3,5,7);
	cout<<box1.volume()<<endl;
	return 0;
}
