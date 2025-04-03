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
	 	cout<<name<<"高度"<<height<<"cm"<<endl;
	 	}
	
};
int main(){
	Plant p1("玫瑰花",30,2),p2("仙人掌",30,4),p3("向日葵",30,8);
	int months;
		cout<<"请输入生长时间："<<endl;
	cin>>months;
	p1.grow(months);
	p2.grow(months);
	p3.grow(months);
	p1.showstatus();
	p2.showstatus();
	p3.showstatus();
	return 0;
	
	
    
    
	
	
}
