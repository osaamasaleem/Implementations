#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
		
		Node(int value){
			this->data=value;
			this->next=NULL;
		}
		
		Node* head = nullptr;
		Node* tail = nullptr;
		
	};
		Node* head = nullptr;
		Node* tail = nullptr;
		
		void insertAtHead(Node * &head,int value){
			Node *temp = new Node(value);
			if(head==NULL){
				head = tail = temp;
			}else{
				temp->next = head;
				head = temp;
			}
		}
		
		void insertAtEnd(Node *&head,int value){
			Node *temp = new Node(value);
			tail->next = temp;
			tail = temp;
		}

		
	
			void reversingList(Node * &head){
		Node *p = nullptr;
		Node *c= head;
		Node *n ;
		
		while(c!=NULL){
			n=c->next;
			c->next=p;
			p=c;
			c=n;
		}
		head = p;
	}
	
			void print(Node * head){
			Node *temp = head;
			while(temp!=NULL){
				cout<<temp->data<<" -> ";
				temp = temp->next;
			}
			cout<<"NULL "<<endl;
		}
		

	

int main(){
	
	Node * head = NULL;

	
	insertAtHead(head,56);
	insertAtHead(head,67);
	insertAtHead(head,78);
	
	insertAtEnd(head,89);
	insertAtEnd(head,99);
	
		cout<<"Original List : ";
	print(head);
	
	cout<<"\nReversed List : ";
	reversingList(head);
	print(head);
	cout<<endl;
	return 0;
}