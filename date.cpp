/*设计一个日期类 Date 并重载自增运算符：定义日期类 Date，包含私有成员变量 year（年，整型）、month（月，整型）、day（日，整型）。
提供有参构造函数，用于初始化年、月、日，并处理非法日期（如月份不在 1 - 12 之间，日期不符合对应月份的天数等情况，可抛出异常）。
编写成员函数 bool isValid () 用于判断当前日期是否合法。重载前置自增运算符 “++” 和后置自增运算符 “++(int)”，
实现日期的自增操作（考虑不同月份的天数以及闰年的情况，如 2 月在闰年有 29 天，平年有 28 天）。
在主程序中创建 Date 对象，分别使用前置和后置自增运算符对日期进行操作，并调用 isValid () 函数检查日期的合法性，同时输出自增后的日期。
*/
#include<iostream>
#include<string>
using namespace std;
class Date{
      private:
      int year;
      int month;
      int day;
      bool isleapYear(){
         return year%400==0||year%100!=0&&year%4==0;
      }
      int getmonthDays(){
        if(month==2){
            return isleapYear()?29:28;
        }
        if(month==4&&month==6&&month==9&&month==11){
            return 30;
        }else {
            return 31;
        }
      }
    public:
    Date(int y,int m,int d){
        year=y;
        month=m;
        day=d;
    }
    bool ismonth(){
        if(month<1&&month>12){
            return false;
        }
    }
    bool isValid(){
        if(day<1&&day>30){
            return false;
        }
    }
    Date & operator++(){
         day++;
         if(day>getmonthDays()){
         day=1;
         month++;
         if(month>12){
            month=1;
        year++;
         }
         }
         return *this;
    }
    Date operator++(int) {
        Date temp = *this;
        ++(*this);
        return temp;
    }
    void display() const {
        cout << year << "-" << month << "-" << day << endl;
    }
};
int main(){
    Date d1(2023, 2, 28); 
        cout << "初始日期: ";
        d1.display();
        
        cout << "前置++: ";
        (++d1).display(); 
        cout << "后置++: ";
        (d1++).display(); 
        cout << "操作后: ";
        d1.display(); 
        return 0;
}