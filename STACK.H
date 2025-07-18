#ifndef STACK_H
#define STACK_H
#include<iostream>
using namespace std;
#define n 5
int st[n];
int t=-1;
void isfull(){
	if(t==n-1) cout<<"stack is Full"<<endl;
	else cout<<"Stack is not Full"<<endl;
}
void isempty(){
	if(t==-1) cout<<"Stack is Empty"<<endl;
	else cout<<"Stack is not Empty"<<endl;
}
void push(int val){
	
	if(t==n-1){
	    cout<<" Stack Is Overflow " << endl;
	}
	else
	{
		
		t++;
	     st[t]=val;
	     cout<< "Enter the value :"<<st[t]<<endl;
	}
}
void pop(){
	if(t==-1){
		cout << "Stack Is Empty " <<endl;
	}
	else{
		cout<<"The popped element is : "<<st[t]<<endl;
	    t--;
	}
}
void display()
{
	int i;
	cout << "The elements are : ";
	for(i=t;i>=0;i--)
	{
		cout << st[i]<<" ";
	}
	cout<<endl;
}
void peek()
{
	if(t==-1){
		cout<<"Stack is Empty " <<endl;
	}
	else
	{
		cout<< "Top element is : "<<st[t] <<endl;
	}
}
#endif
