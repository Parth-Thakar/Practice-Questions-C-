#include<iostream>
using namespace std;

class node
{
	public:
		int data;
		node* next;
	//constructor
	node(int data1)
	{
		data = data1;
		next = NULL;
	}
};
void Inserth(node* &head,int d)
{
	node n2(d);
	n2.next = head;
	head = &n2;
}
void print(node* &head)
{
	node* temp = head;
	while(temp != NULL)
	{
		int i=1;
		cout<<"data -> "<<i++<<" "<<temp->data<<endl;
		temp = temp->next;
	}	
}
int main()
{
	node n1(5);
	node *head;
	head = &n1;
	//cout<<n1.data<<endl;
	//cout<<n1.next<<endl;
	//print(head);
	Inserth(head,67);
	print(head);
}
