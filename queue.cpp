#include<iostream>
using namespace std;
#define max 200
class qu
{
	int arr[max],front,back;
	public:
		qu()
		{
			front=-1;
			back=-1;
		}
	void insert(int x) 
	{
		if(back==(max-1))
		{
		cout<<"queue is overflow :"<<endl;
		}
		else {
			if(front==-1)
			{
			front++;
			}
			cout<<"insert the element in queue : "<<endl;
			back++;
			arr[back]=x;
		}
	}
	void del()
	{
		if(front==-1)
		{
			cout<<"queue is underflow :"<<endl;
			
		}
		else 
		{
			cout<<"Element poped and deleted : "<<arr[front]<<endl;
			front++;
		}
	}	
	void peek()
	{
		if(front == -1)
		{
			cout<<"queue is empty :"<<endl;
		}
		else
		{
			cout<<"queue elements are :"<<endl;
			cout<<arr[front];
		}
	}
};
int main()
{
	int ch,x;
	qu obj;
	while(true)
	{
	cout<<"enter the choice \n 1. for enque \n 2. for dequeue \n 3. for peek \n 4. for exit \n ";
	cin>>ch;
	switch(ch)
	{
		case 1:
			cout<<"enter the insert value "<<endl;
			cin>>x;
			obj.insert(x);
			cout<<"insertion has been done :"<<endl;
			break;
		case 2:
			obj.del();
			break;
		case 3:
			obj.peek();
			break;
		case 4:
			exit(0);
	}	
}
}
