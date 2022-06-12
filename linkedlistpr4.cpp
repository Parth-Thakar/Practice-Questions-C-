#include<iostream>
using namespace std;
class node
{
	public:
	int data;
	node* add;
	node(int x)
	{
		data = x;
		add = NULL;
	}
};
void inserthead(node* &head,int x)
{
	node* newnode = new node(x);
	newnode->add = head;
	head = newnode;
}
void inserttail(node* &tail,int x)
{
	node* newnode = new node(x);
	tail->add = newnode;
	tail = newnode;
}
void insertmid(node* &head,int post,int x)
{
	node* newnode = new node(x);
	node* prev=head;
	for(int i =1 ;i<=post-1;i++)
	{
		prev = prev->add;
	}
	newnode->add = prev->add;
	prev->add = newnode;
	cout<<"insertion has been done:"<<endl;
}
void print(node* head)
{
	while(head != NULL)
	{
		cout<<"DATA IS :"<<head->data<<endl;
		head = head->add;
	}
}
int main()
{
	node* node1 = new node(10);
	node* head = node1;
	node* tail = node1;
	int ch;
	while(true)
	{

	cout<<"enter your choice \n 1. for insert at head \n 2. for insert at tail\n 3. insert at mid \n 4. for print \n 5. for exit "<<endl;
	cin>>ch;	
	int x,post;
	switch(ch)
	{
		case 1:
			cout<<"enter the number that you want to insert :"<<endl;
			cin>>x;
			inserthead(head,x);
			break;
		case 2:
			cout<<"enter the number that you want to insert :"<<endl;
			cin>>x;
			inserttail(tail,x);
			break;
		case 3:
			cout<<"enter the position and number that you want to insert :"<<endl;
			cin>>post>>x;
			insertmid(head,post,x);
			break;
		case 4:
			print(head);
			break;
		case 5:
			exit(0);
			break;
		default:
			cout<<"no such options available :"<<endl;
			break;
	}
	
}
		
}
