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
				cout<<"栈已满，无法添加元素"<<endl;
				return;
			}
			 data[++top]=value;
		}
		int peek(){
			if(isEmpty()){
				cout<<"栈为空"<<endl;
			}
			return data[top];
		}
		int pop(){
			if(isEmpty()){
				cout<<"栈为空，无法弹出元素"<<endl;
				return -1;
			}
			return data[top--];
		}
		void clear(){
			top=-1;
		}
		void printfSatck(){
			if(isEmpty()){
				cout<<"栈为空"<<endl;
				return ;
			}
			cout<<"栈内容（从栈顶到栈底）：";
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
	cout<<"栈顶元素："<<stack.peek()<<endl;
	cout<<"删除元素："<<stack.pop()<<endl;
	cout<<"删除元素："<<stack.pop()<<endl;
	stack.printfSatck();
	stack.clear();
	cout<<"清空栈后：";
	stack.printfSatck();
	return 0;
	
}
