#include<iostream>
using namespace std;
class Animal{
	public:
	 virtual  void speak(){
		cout<<"�����ڽ�"<<endl;
	}
};
class Cat:public Animal{
	public:
		void speak(){
			cout<<"Сè�ڽ�"<<endl;
		}
};
void dospeak(Animal&animal){
	animal.speak();
}
void test(){
	Cat lihua;
    dospeak(lihua);
}
int main(){
	Cat cat;
	dospeak(cat);
	return 0;
}




