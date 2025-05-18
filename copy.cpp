/*拷贝构造函数调用的时机
1.使用一个已经创建完毕的对象集
2.值传递的方式给函数参数传值
3.值方式返回局部对象*/
#include<iostream>
using namespace std;
class Person{
public:
Person(){
    cout<<"Person的默认构造函数调用"<<endl;
}
Person(int age){
    cout<<"Person的有参构造函数被调用"<<endl;
 m_age=age;

}
Person(const Person &p){
    cout<<"Person拷贝构造函数调用"<<endl;
    m_age=p.m_age;
}
~Person(){
    cout<<"Person的析构函数被调用"<<endl;
}
int m_age;
};
void test01(){
    Person p1(20);
    Person p2(p1);
}
void dowork(Person p){

}
void test02(){
    Person p;
    dowork(p);
}
int main(){
   // test01();
   test02();
    return 0;
}
