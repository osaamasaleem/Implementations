#include<iostream>
using namespace std;

int queue[100];
int size = 4;
int front = -1;
int rear = -1;

void enqueue(int value){
	if(rear == size-1){
		cout<<"Queue is Full.No more Enqueue"<<endl;
		return;
	}else{
		if(front == -1){
			front = 0;
		}
		rear++;
		queue[rear] = value;
	}
}

void dequeue(){
	if(front==-1||front>rear){
		cout<<"Queue is Empty.Nothing to Pop"<<endl;
	}
	cout<<"Element popped is "<<queue[front]<<endl;
	front ++;
	
	if(front>rear){
		front = rear = -1;
	}
}

void print(){
	if(front==-1||front>rear){
		cout<<"Queue is Empty."<<endl;
	}
	for(int i=front;i<=rear;i++){
		cout<<queue[i]<<" ";
	}
	cout<<endl;
	 cout<<"Front : "<<front<<endl;
    cout<<"Rear : "<<rear<<endl;
}


int main(){

	
	enqueue(67);
	enqueue(45);
	enqueue(23);
	enqueue(76);
	enqueue(19);  //this should give queue is full
cout<<"Before Popping : ";
	print();
	
	dequeue();
cout<<"After one Pop : ";
    print();
    
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    
    
    print();
    
    return 0;
}