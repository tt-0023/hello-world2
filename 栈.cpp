#include<iostream>
using namespace std;
#define MAX_SIAZE 100
class ArrayStack{
	private:
		int data[MAX_SIAZE];
		int top;
	public:
		ArrayStack(){
			top=-1;
		}
		bool isEmpty(){
			return top==-1;
		}
		bool isFull(){
			return top==MAX_SIAZE-1;
		}
		void push(int value){
			if(isFull()){
				cout<<"ջ�������޷����Ԫ��"<<endl;
				return;
			}
			 data[++top]=value;
		}
		int peek(){
			if(isEmpty()){
				cout<<"ջΪ��"<<endl;
			}
			return data[top];
		}
		int pop(){
			if(isEmpty()){
				cout<<"ջΪ�գ��޷�����Ԫ��"<<endl;
				return -1;
			}
			return data[top--];
		}
		void clear(){
			top=-1;
		}
		void printfSatck(){
			if(isEmpty()){
				cout<<"ջΪ��"<<endl;
				return ;
			}
			cout<<"ջ���ݣ���ջ����ջ�ף���";
			for(int i=top;i>=0;i--){
				cout<<data[i]<<"";
			}
			cout<<endl;
		}
};
int main(){
	ArrayStack stack;
	stack.push(12);
	stack.push(30);
	stack.push(43);
	stack.push(10);
	stack.printfSatck();
	cout<<"ջ��Ԫ�أ�"<<stack.peek()<<endl;
	cout<<"ɾ��Ԫ�أ�"<<stack.pop()<<endl;
	cout<<"ɾ��Ԫ�أ�"<<stack.pop()<<endl;
	stack.printfSatck();
	stack.clear();
	cout<<"���ջ��";
	stack.printfSatck();
	return 0;
	
}
