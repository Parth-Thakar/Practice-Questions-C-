#include<iostream>
using namespace std;
cl  ass node{
	public:
		int data;
		node* f;
		node* b;
		node(int x)
		{
			data = x;
			f = NULL;
			b = NULL;
		}
		~node(int post)
		{
			cout<<"node destroyed of postion "<<post<<endl;
		}
};
void inserthead(node* &head,int x)
{
	
}
