#include<iostream>
#include<string>//����string��to_string��������
#include<algorithm>//��reverse()����������ԭ�ط�ת����
using namespace std;
class Solution{
	public:
 bool isPalindrome(int x){
 	if(x<0){
	 	return false;
	 }
	 //������ת��Ϊ�ַ�����ʾ
	 //to_string()������������תΪ�ַ���
	string originalStr=to_string(x);
	 //����ԭʼ�ַ����ĸ������ڷ�ת
	 string reversedStr=originalStr;
	 //ʹ��STL�㷨��ת�ַ���
	 reverse(reversedStr.begin(),reversedStr.end());
	 return originalStr==reversedStr;
	 
 }
};
int main (){
	Solution s;
	cout<<s.isPalindrome(678)<<endl;
	return 0;
}
