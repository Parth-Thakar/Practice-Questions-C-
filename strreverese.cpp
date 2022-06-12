#include<bits/stdc++.h>
#include<iostream>
#include<string>
#define max 100
using namespace std;
class stack
{
	public:
	int arr[max];
	int top;
	stack()
	{
		top=-1;
	}
	void push(int x)
	{
		if(top == max)
		{
			cout<<"stack is overflow"<<endl;
		}
		else
		top++;
		arr[top]=x;
	}
	int pop ()
	{
		int x;
		if(top==-1)
		{
			cout<<"stack is underflow"<<endl;	
		}	
		else
		{
			x = arr[top];
			top--;
			return x;
		}	
	}
};
int main()
{
	stack st;
	int i;
	i = 1;
	i =3
	
}






