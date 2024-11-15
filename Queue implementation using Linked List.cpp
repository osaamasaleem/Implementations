#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
		
	
		
		Node(int value){
			this->data = value;
			this->next = NULL;
		}
	};
	
	class Queue{

		
		public:
				Node *front = NULL;
		Node *rear = NULL;
		
		
		bool isEmpty(){
			if(front==NULL){
				return true;
			}
			else{
				return false;
			}
		}
		
		void enqueue(int value){
			Node *temp = new Node(value);
			//temp->data = value;
			//temp->next = NULL;
			if(front==NULL){
				front = rear = temp;
			}else{
				rear->next = temp;
				rear = temp;
			}
		}
		
		void dequeue(){
			if(isEmpty()){
				cout<<"Queue is Empty."<<endl;
			}else{
				Node *temp = front;
				if(front ==rear){
					delete(temp);
					front = rear =NULL;
				}else{
					front = front->next;
					delete(temp);
				}
			}
		}
		
		void print(){
			if(isEmpty()){
				cout<<"Nothing there to print."<<endl;
			}else{
			
			Node *temp = front;
			while(temp!=nullptr){
				cout<<temp->data<<" -> ";
				temp = temp->next;
			}
			cout<<"NULL"<<endl;
		}
	}
};
int main(){

	Queue node1;
	
	node1.enqueue(45);
	node1.enqueue(67);
	
	node1.print();
	
	node1.dequeue();
	node1.print();
	
	node1.dequeue();
	node1.dequeue();
	node1.print();
	
	return 0;
}