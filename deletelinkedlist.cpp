#include<bits/stdc++.h>
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
		~node()
		{
			cout<<"Node crushed :"<<endl;
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
		cout<<head->data<<endl;
		head = head->add;
	}
}
void del(node* &head,int post)
{
	node* prev=head;
	node* curr=NULL;
	for(int i=1;i<post-1;i++)
	{
		prev=prev->add;
	}
	curr=prev->add;
	prev->add=curr->add;
	
	delete curr;
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
	
	print(head);
	
	del(head,4);
	cout<<" After del : "<<endl;
	print(head);
}
