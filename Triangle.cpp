/*2.	���ʵ�֣�������������Triangle����������Ϊ3���߳�������Ϊint���ṩ����Ա����void getvalue()ʵ�ִӼ���������3���߳���
�������������ε����߳������ܹ��������Σ�������쳣��������йصľ�����Ϣ���ṩ��Ա����int getperimeter()�������ε��ܳ���
��main�����д����������󣬷ֱ����getvalue()����߳���һ���������������Ϣ��֤�쳣�����Ƿ���Ч��
һ������������ȷ��Ϣ������getperimeter()�������������ܳ��������
*/
#include<iostream>
using namespace std;
class Triangle{
	public:
		int a;
		int b;
		int c;
	void getvalue(){
		cin>>a>>b>>c;
	}
	void  div(){
		if(a+b<c||a-b>c){
			throw "error";
		}
	}
	int getperimeter(){
		return a+b+c;
	}
};
int main(){
	Triangle s;
	s.getvalue();
	s.div();
	s.getperimeter();
	Triangle s1;
	s1.getperimeter();
	s1.div();
	s1.getperimeter();
	return 0;
	
}
