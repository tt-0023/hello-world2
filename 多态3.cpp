#include<iostream>
using namespace std;
class Animal{
	public:
	 virtual  void speak(){
		cout<<"动物在叫"<<endl;
	}
};
class Cat:public Animal{
	public:
		void speak(){
			cout<<"小猫在叫"<<endl;
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




