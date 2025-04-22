#include<iostream>
using namespace std;
struct Node{
	int data;
	Node*next;
	Node(int val):data(val),next(nullptr){}
};
int main(){
	Node*head=new Node(76);
	Node*second=new Node(2);
	Node*third=new Node(3);
	head->next= second;
	second-> next=third;
	Node*current=head;
	while(current!=nullptr){
		cout<<current->data<<"";
		current=current->next;
	}
	delete head;
	delete second;
	delete third;
	return 0;
	
	
}
