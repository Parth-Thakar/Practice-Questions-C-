#include<iostream>
using namespace std;
#define max 100
class stack
{
	int arr[max],top;
	public:
	stack()
	{
		top=-1;
	}
	void push(int x)
	{
		if(top>=(max-1))
		{
			cout<<"stack is overflow :"<<endl;
		}
		else {
		top++;
		arr[top]=x;
		cout<<"insertion has been done :"<<endl;
		}
	}
	int pop()
	{
		int x;
		if(top==-1)
		{
			cout<<"stack is underflow :"<<endl;
			return false;
		}
		else 
		{
			x=arr[top];
			top--;
			return x;
		}
	}
	void empty()
	{
		if(top==-1)
		{
			cout<<"stack is empty :"<<endl;
		}
		else 
		cout<<"stack is not empty : "<<endl;
	}
};
int main()
{
	stack* obj = new stack;
	
	
	int ch,en;
	while(true)
	{
	cout<<"enter your choice :\n 1. for push \n 2. for pop \n 3. for empty check \n 4. exit \n";
	cin>>ch;
	switch(ch)
	{
		case 1:
			cout<<"enter the push value :"<<endl;
			cin>>en;
			obj->push(en);
			break;
		case 2:
			cout<<"The pop last value is "<<endl;
			en=obj->pop();
			cout<<en<<endl;
			break;
		case 3:
			obj->empty();
			break;
		case 4:
			exit(0);
			break;
		default :
			cout<<"no such option here :"<<endl;
			break;
	}
}
}
