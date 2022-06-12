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
		if(top==(max-1))
		{
			cout<<"stack is oerflowing :"<<endl;	
		}	
		else
		{
			arr[top++]=x;
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
		else {
			
		
		x=arr[top];
		top--;
		return x;
	}
	}
	void empty ()
	{
		if(top==-1){
			cout<<"the stack is empty :"<<endl;
		
		}
		else
		cout<<"stack is not empty : "<<endl;
	}
};

int main()
{
	stack obj;
	int ch,push;
	while(true)
	{
	
	cout<<"enter the choice :"<<endl;
	cout<<"1. for push \n 2. for pop \n 3. for check empty \n 4. for exit "<<endl;
	cin>>ch;
	switch(ch)
	{
		case 1:
			cout<<"enter the number that you want to push in the stack :"<<endl;
			cin>>push;
			obj.push(push);
			break;
		case 2:
			push=obj.pop();
			cout<<"the pop value is :"<<push<<endl;
			break;
		case 3:
			obj.empty();
			break;
		case 4:
			exit(0);
			break;
		default :
			cout<<"no such option available here :"<<endl;
			break;
	}
}
}
