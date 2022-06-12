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
void inserttail(node* &tail,int x)
{
	node* newnode = new node(x);    // step : 1 node creation
	tail->add = newnode;				// step 2: tail->add = newnode;
	tail = newnode;
}
void print(node* head)
{
	while(head!= NULL)
	{
		cout<<"data = > "<<head->data<<endl;
		head= head->add;
	}
	
}
int main()
{
	node* node1 = new node(10);
	
	node* head = node1;
	
	node* tail = node1;
	
	inserttail(tail,20);
	
	inserttail(tail,21);
	
	inserttail(tail,22);
	
	inserttail(tail,23);
	
		print(head);
}
