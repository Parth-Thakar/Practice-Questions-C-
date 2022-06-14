#include<iostream>
using namespace std;
class node{
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
void print(node* head)
{
	while(head!=NULL)
	{
		cout<<head->data<<endl;
		head = head->add;
	}
}

void insertmid(node* &head,int post,int x)
{
	node* newnode = new node(x);
	node* temp = head;
	
	for(int i=1;i<post-1;i++)
	{
		temp = temp->add;
	}
	
	newnode->add = temp->add;
	temp->add = newnode;
}
int main()
{
	node* node1 = new node(10);	
	
	node* head = node1;
	node* tail = node1;
	
	inserttail(tail,20);
	inserttail(tail,30);	
	inserttail(tail,40);
	
	insertmid(head,3,25);
	print(head);
	
}
