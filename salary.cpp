#include<iostream>
#include<string>
using namespace std;
class Employee{
	protected:
		string name;
		int month;
	public:
		Employee(string, int );
		virtual ~Employee(){}
		virtual float getSalary(int )const=0;
		string getName();
};
Employee::Employee(string name,int month){
	this->name=name;
	this->month=month;
}
string Employee::getName(){
	return name;
}
class SalariedEmployee:public Employee{
	private:
		float monthSalary;
	public:
		SalariedEmployee(string ,int ,float);
		~SalariedEmployee();
		float getSalary(int )const;
};
SalariedEmployee::SalariedEmployee(string name,int month,float monthSalary):Employee(name,month),monthSalary(monthSalary){}
SalariedEmployee::~SalariedEmployee(){
};
float SalariedEmployee::getSalary(int month)const{
	return this->month==month?monthSalary+100:monthSalary;
}
class HourlyEmployee:public Employee{
	public:
		HourlyEmployee(string ,int,int,float);
		~HourlyEmployee();
		float getSalary(int )const;
	private:
		int hour;
		float hourlySalary;
};
HourlyEmployee::HourlyEmployee(string name,int month,int hour,float hourlySalary):Employee(name,month),hour(hour),hourlySalary(hourlySalary) {}
HourlyEmployee::~HourlyEmployee(){};
float HourlyEmployee::getSalary(int month) const
{
	float salay;
	if(hour<=160){
		salay=hour*hourlySalary;
	}else{
		salay=160*hourlySalary+(hour-160)*hourlySalary*1.5;
	}
	return this->month==month?salay+100:salay;
}
class SalesEmployee:public Employee{
	public:
		SalesEmployee(string ,int ,float,float);
		~SalesEmployee();
		float getSalary(int)const;
		private:
			float monthSales;
			float rate;
			
};
SalesEmployee::SalesEmployee(string name,int month,float monthlySales,float rate):Employee(name,month),monthSales(monthlySales),rate(rate){}
SalesEmployee::~SalesEmployee(){}
float  SalesEmployee::getSalary(int month)const{
	return this->month==month?monthSales*rate+100:monthSales*rate;
}
class Company{
	public:
		static void printfSalary(Employee*employee,int month);
};
void Company::printfSalary(Employee*employee,int month){
	cout<<employee->getName()<<"在第"<<month<<"月的工资为："<<employee->getSalary(month)<<"\n";
}
int main(){
	Employee  *e1=new SalariedEmployee("Jack",1,2000);
	Employee *e2=new SalariedEmployee("Luck",2,3000);
	Employee *e3=new SalariedEmployee("Lily",3,4000);
	Employee *ee[3]={e1,e2,e3};
	int i;
	for(i=0;i<3;i++){
		Company::printfSalary(ee[i],1);
	}
	
	for(i=0;i<9;i++){
		delete ee[i];
	}
	return 0;
	
}









 
