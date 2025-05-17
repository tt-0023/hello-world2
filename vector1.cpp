#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Person{
    public:
    string name;
    int age;
    Person(string m_name,int m_age){
        this->name=m_name;
        this->age=m_age;
    }
};
void test(){
    vector<Person> v;
    Person p1("zhangsan",10);
    Person p2("lisi",20);
    Person p3("wangwu",30);
    Person p4("xiaoming",40);
    Person p5("xiaobai",50);
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);
    for(vector<Person>::iterator it=v.begin();it!=v.end();it++){
       // cout<<"name:"<<(*it).name<<endl;
       //cout<<"age:"<<(*it).age<<endl;
       cout<<"name:"<<it->name<<endl;
       cout<<"age:"<<it->age<<endl;//说明迭代器可以视为指针
      }
}
void test1(){
    vector<Person *>v;
     Person p1("zhangsan",10);
    Person p2("lisi",20);
    Person p3("wangwu",30);
    Person p4("xiaoming",40);
    Person p5("xiaobai",50);
    v.push_back(&p1);
    v.push_back(&p2);
    v.push_back(&p3);
    v.push_back(&p4);
    v.push_back(&p5);
    for(vector<Person *>::iterator it=v.begin();it!=v.end();it++){
        cout<<"::name:"<<(*it)->name<<endl;
        cout<<"::age:"<<(*it)->age<<endl;
    }
}
int main(){
    test();
    test1();
    return 0;
}