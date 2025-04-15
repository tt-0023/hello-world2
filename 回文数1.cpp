#include<iostream>
#include<string>//用于string和to_string（）函数
#include<algorithm>//用reverse()函数，用于原地反转序列
using namespace std;
class Solution{
	public:
 bool isPalindrome(int x){
 	if(x<0){
	 	return false;
	 }
	 //将整数转化为字符串表示
	 //to_string()函数，将数字转为字符串
	string originalStr=to_string(x);
	 //创建原始字符串的副本用于反转
	 string reversedStr=originalStr;
	 //使用STL算法反转字符串
	 reverse(reversedStr.begin(),reversedStr.end());
	 return originalStr==reversedStr;
	 
 }
};
int main (){
	Solution s;
	cout<<s.isPalindrome(678)<<endl;
	return 0;
}
