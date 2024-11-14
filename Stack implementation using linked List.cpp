#include<iostream>
using namespace std;
class Node{
		public:
		int data;
		Node *next;
		
		Node(int data){
			this->data = data;
			this->next = NULL;
		}
	
};
class Stack{
		Node *top = NULL ;
	

        public:
		
		bool isEmpty(){
		return top==NULL;
		}
		
		void push(int value){
			Node *temp = new Node(value);
		//	temp->data  = value;
			temp->next = top;
			top = temp;
			
		}
		
		void pop(){
			if(isEmpty()){
				cout<<"Stack is Empty."<<endl;
				return;
			}
			Node *temp = top;
			top = top->next;
			delete(temp);
		}
		
		void display(){
			if(isEmpty()){
				cout<<"Stack is empty"<<endl;
			}else{
				Node *temp = top;
				while( temp!= nullptr){
				
				cout<<temp->data<<" ";
				temp = temp->next;
			}
			}
			cout<<endl;
		}
		
};

int main(){
	Stack stack1;
	stack1.push(34);
	stack1.push(56);
	stack1.push(98);
	
	cout<<"Before Popping : ";
	stack1.display();
	
	stack1.pop();
	
	cout<<"After Popping : ";
	stack1.display();
	return 0;
}