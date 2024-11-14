#include<iostream>
using namespace std;

class cStack{
	private:
	int * stackArray; //makes dynamic array
	int stackSize;    // max size of stack
	int top;         //variable for stack pos
	
	public:
	cStack(int size){
	stackArray = new int[size];
    stackSize = size;
	top = -1;	
}

    ~cStack(){
    	delete[] stackArray;
	}
	
    bool isFull(){
	return top == stackSize-1;
	}
    	
    bool isEmpty(){
    	return top == -1;
	}
    void push(int num){
    	if(isFull()){
    		cout<<"Stack is Full."<<endl;
		}else{
			top++;
			stackArray[top]  = num;
		}
	}
	
	void pop(int &num){
		if(isEmpty()){
			cout<<"Stack is Empty."<<endl;
		}
		else{
			num = stackArray[top];
			top--;
		}
	}
	
	void print(){
		if(isEmpty()){
			cout<<"Stack is Empty."<<endl;
		}else{
			for(int i=top;i>= 0;i--){
				cout<<stackArray[i]<<" ";
			}
			cout<<endl;
		}
	}
};

int main(){
	cStack stack(5);
	int num;
	
		cout<<"\nStack before any pushing."<<endl;
	stack.print();
	
	cout<<"Pushing numbers into the stack."<<endl;
	for(int i=0;i<5;i++){
		cout<<"Enter number to push :";
		cin>>num;
		stack.push(num);
	}
	
	cout<<"\nStack before any popping."<<endl;
	stack.print();
	
	cout<<"Popping number from stack"<<endl;
	int var;
	stack.pop(var);
	cout<<"Popped number from Stack is "<<var<<endl;
	stack.pop(var);
	cout<<"Popped number from Stack is "<<var<<endl;
	
	cout<<"\nStack before after popping."<<endl;
	stack.print();
	return 0;
}