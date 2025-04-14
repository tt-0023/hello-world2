#include<iostream>
#include<string>
#include<cmath>
using namespace std; 
 class Solution {
public:
    int findClosest(int x, int y, int z) {
        if(abs(x-z)>abs(y-z)){
            return  2;
        }else if(abs(x-z)<abs(y-z)){
            return 1;
        }else {
            return 0;
        }
}
 };
int main(){
	Solution s1;
	int result=s1.findClosest(1,5,3);
	cout<<"RESULT"<<result<<endl;
	return 0;
	
}
