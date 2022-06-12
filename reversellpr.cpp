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
void inserthead(node* &head,int data)
{
	node* newnode = new node(data);
	newnode->add = head;
	head = newnode;
}
void print(node* head)
{
	while(head!=NULL)
	{
		cout<<head->data<<endl;
		head = head->add; 
	}
}
void reverse(node* &head)
{
	node* prev = NULL;
	node* curr = head;
	node* forward = NULL;
	
	while(curr!=NULL)
	{
		forward = curr->add;
		curr->add = prev;
		prev = curr;
		curr = forward;
	}
	head = prev;
}
int main()
{
	node* head = NULL;
	inserthead(head,10);
	inserthead(head,20);
	inserthead(head,30);
	inserthead(head,40);
	inserthead(head,50);
	inserthead(head,60);
	inserthead(head,70);
	inserthead(head,80);
	print(head);
	cout<<"----------------------------------------------------"<<endl;
	reverse(head);
	print(head);
	
}
