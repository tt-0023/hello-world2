#include<iostream>
#include<string>
using namespace std;
class Plant{
	private:
	   string	name;
	   double height;
	   double growthrate;
	   public:
	   	Plant(string n, double h,double g){
		   	name=n;
		   	height=h;
		   	growthrate=g;
		   }
		Plant(){
			
		}
	  void 	grow(int months){
	     height+= months*growthrate;
	     
	}
	 void showstatus(){
	 	cout<<name<<"�߶�"<<height<<"cm"<<endl;
	 	}
	
};
int main(){
	Plant p1("õ�廨",30,2),p2("������",30,4),p3("���տ�",30,8);
	int months;
		cout<<"����������ʱ�䣺"<<endl;
	cin>>months;
	p1.grow(months);
	p2.grow(months);
	p3.grow(months);
	p1.showstatus();
	p2.showstatus();
	p3.showstatus();
	return 0;
	
	
    
    
	
	
}
