/* General Implementation of Stack using class */
#include <bits/stdc++.h>
using namespace std;
#define n 100
class Stack{
	int top;
	public:
	int arr[n];
	Stack(){
		
		top=-1;
		int push(int x);
		int pop();
		int peek();
		bool isEmpty();
	}
	int push(int x){
		if(top==n-1){
			cout << "Stack Overflow"<<endl;
			return false;
		}
		else{
			top++;
			arr[top]=x;
			cout<<x<<endl;
			return true;
		}
	}
	int pop(){
		if(top==-1){
			cout << "stack underflow"<<endl;
			return 0;
		}
		else{
			int x=arr[top--];
			return x;
		}
	}
	int peek(){
		if(n==-1){
			cout << "stack is empty"<<endl;
			return 0;
		}
		else{
			int x=arr[top];
			return x;
		}
	}
	bool isEmpty()
{
	return (top < 0);
}
};
int main()
{
	class Stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	cout << s.pop() << " Popped from stack\n";
	//print all elements in stack :
	cout<<"Elements present in stack : ";
	while(!s.isEmpty())
	{
		// print top element in stack8
		cout<<s.peek()<<" ";
		// remove top element in stack
		s.pop();
	}

	return 0;
}
