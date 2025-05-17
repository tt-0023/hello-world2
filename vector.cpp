#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void myprintf(int val){
    cout<<val<<endl;
}
void test(){
    vector<int >v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    vector<int>::iterator itBegin=v.begin();
    vector<int>::iterator itEnd=v.end();
    /*while(itBegin!=itEnd){
        cout<<*itBegin<<endl;
        itBegin++;
    }
}*/
  /* for(vector<int>::iterator it=v.begin();it!=itEnd;it++){
    cout<<*it<<endl;
   }*/
  for_each(v.begin(),v.end(),myprintf);
}
   int main(){
    test();
    system("pause");
   }