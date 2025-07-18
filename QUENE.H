#ifndef QUEUE_H
#define QUEUE_H
#include<iostream>
using namespace std;
#define size 5
int Q[size];
int f=-1;
int r=-1;
void enqueue(int n){
	if(r== size-1 ){
		cout<<"Stack is Full"<<endl;
	}
	else{
	    if(f==-1 && r==-1){
			f++;
			r++;
			Q[r]=n;
	    }
		else{
			r++;
		    Q[r]=n;   
		}
		cout<<"Enter the element : "<<n<<endl;	
	}
}
void dequeue(){
	if(f==-1 || f > r){
		cout<<"Queue is Empty"<<endl;
	}
	else{
		f++;
		cout<<"Removed top element "<<endl;
	}
}
void display(){
	int i;
	if(f== -1 || f > r ){
		printf("Queue is empty");
	}
	else{
		cout<<"The elements are :";
		for(i=f;i<=r;i++){
			printf("%d ",Q[i]);
		}
		cout<<endl;
	}
}
void peek(){
	if(f== -1){
		cout<<"Queue is empty"<<endl;
	}
	else{
		cout<<"Top Element is "<<Q[f]<<endl;
	}
}
void isempty(){
	if(f== -1 || f > r){
		cout<<" Queue is Empty "<<endl;
	}
	else{
		cout<<" Queue is Not  Empty" << endl;
	}
}
 
void isfull(){
	if(r== size-1 ){
		cout<<" Queue is Full "<<endl;
	}
	else{
		cout<<" Queue is Not Full"<<endl;
	}
}
#endif
