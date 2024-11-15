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
		
		void insertAtPos(Node * &head,int value,int pos){
			Node *temp = new Node(value);
			if(pos<=1){
				insertAtHead(head,value);
				return;
			}
			
			Node *curr = head;
			int count = 1;
			
			while(curr!=NULL&&count<pos-1){
				curr = curr->next;
				count++;
			}
			
			if(curr->next == NULL){
				insertAtEnd(head,value);
				return;
			}else{
				temp->next = curr->next;
				curr->next = temp;
			}
		}
		
	
		
		void deleteAtStart(Node *&head ){
			if(head==NULL){
				cout<<"List is Empty."<<endl;
				return;
			}
			Node *temp = head;
			head = temp->next;
			delete(temp);
		}
		
		void deleteAtEnd(Node * &head){
			Node *curr , *prev ;
			curr = head;
			if(head==NULL){
				cout<<"List is Empty."<<endl;
				return;
			}
			if(curr->next==NULL){
				delete curr;
				head = NULL;
			}else{
			
			
			while(curr->next!=NULL){
				prev = curr;
				curr = curr->next;
			}
			prev -> next = NULL;
			delete curr;
		}
		}
		
		void deleteAtPos(Node *&head,int pos){
			if(head==NULL){
				cout<<"list is empty."<<endl;
				return;
			}
			
			if(pos<=0){
				cout<<"Invalid Pos"<<endl;
				return;
			}
			
			Node *curr = head;
			Node *prev = NULL;
			
			if(pos==1){
				head = curr->next;
				delete curr;
				return;
			}
			
			int count=1;
			while(curr!=NULL && count<pos){
				prev = curr;
				curr=curr->next;
				count++;
			}
			
			if(curr==NULL){
				cout<<"pos out of bound."<<endl;
				return;
			}
			
			prev->next = curr->next;
			delete curr;
			
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
	
	print(head);
	
	
	
	insertAtEnd(head,89);
	insertAtEnd(head,99);
	
	print(head);
	
	deleteAtStart(head);
	
	print(head);
	
	deleteAtEnd(head);
	
	print(head);
	
	deleteAtPos(head,2);
	print(head);
	return 0;
}