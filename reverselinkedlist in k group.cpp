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
void print(node* head)
{
	while(head!=NULL)
	{
		cout<<"data - "<<head->data<<endl;
		head=head->add;
	}
}
void revink(node* &head)
{
	if(head == NULL)
	{
		return NULL;
	}
	
	node* forward = NULL;
	node* cur = head;
	node* prev = NULL;
	
	while(curr!=NULL && count < k)
	{
		forward = curr->add;
		curr->add = prev;
		prev = curr;
		curr = forward;
	}
	
}
int main()
{
	node* node1 = new node(10);
	
	node* head = node1;
	
	inserthead(head,20);
	inserthead(head,30);
	inserthead(head,40);
	inserthead(head,50);
	inserthead(head,60);
	inserthead(head,70);
	inserthead(head,80);
	
	
	print(head);
	
}
