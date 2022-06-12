#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
	int data;
	node* add;
	node(int x)
	{
		add= NULL;
		data = x;
	}
	~node()
	{
		cout<<"node Crushed :"<<endl;
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
		cout<<" data = "<<head->data<<endl;
		head = head->add;
	}
}
bool ispal(node* head)
{
	stack <int> s;
	int i;
	node* temp = head;
	
	while(temp!=NULL)
	{
		s.push(temp->data);
		temp = temp->add;
	}
	
	while(head != NULL)
	{
		i = s.top();
		
		s.pop();
		if(head->data!=i)
		{
			return false;
		}
		
		head = head->add;
	}
	return true;
}
int main()
{
	node* n1 = new node(10);
	node* head = n1;
	
	
	inserthead(head,10);
	inserthead(head,10);
	inserthead(head,550);
	inserthead(head,10);
	inserthead(head,10);
	inserthead(head,10);
	
		
	print(head);	
	
	if(ispal(head))
	{
		cout<<"palindrome : "<<endl;
	}
	else
	{
		cout<<"not palindrome :"<<endl;
	}
	
}

