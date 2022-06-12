#include<iostream>
using namespace std;
class node
{
	public:
	int data;
	node* nxt;	
		node(int x)
		{
			data = x;
			nxt = NULL;
		}
};
int main()
{
	node* node1 = new node(10);
	
	node* head = node1;
	
	cout<<"node 1 data = "<<node1->data<<endl;
	cout<<"address of 1 = "<<node1->nxt<<endl;                                              
	
}
