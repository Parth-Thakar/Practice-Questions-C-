#include<iostream>
using namespace std;
#define max 100
class stack
{
int arr[max];
int top;
	public:
	stack()
	{
	top=-1;	
	}
	void push(int x)
	{
		if(top==(max-1))
		{
			cout<<"stack is overflow : "<<endl;	
		}	
		else
		{
			top++;
			arr[top]=x;
			cout<<"insertion has been done : "<<endl;
		}
	}
	int pop()
	{
		int x;
		if(top==-1)
		{
		cout<<" stack is underflow :"<<endl;
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
		cout<<"stack is empty  : "<<endl;
		else
		cout<<"stack is not emplty : "<<endl;	
	}
};
int main()
{
	stack obj;
	int ch,i;
	while(true)
	{
	
	cout<<"enter the choice of stack \n 1. for push \n 2. for pop \n 3. empty : \n 4. for  exit:"<<endl;
	cin>>ch;
	switch(ch)
	{
		case 1: 
			cout<<"enter the push value :"<<endl;
			cin>>i;
			obj.push(i);
		break;
		case 2:
			cout<<"The top value is : ";
			i=obj.pop();
			cout<<i<<endl;
		break;
		case 3:
			obj.empty();
		break;
		case 4:
			exit(0);
		break;
		default:
			cout<<"no such option available here : ";
		break;
	}	
}
}
