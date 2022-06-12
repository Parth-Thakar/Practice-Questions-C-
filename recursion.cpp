#include<iostream>
using namespace std;
int fact(int x)
{
	if(x == 1||x==0)
	{
		return 1;
	}
	else
	{
		return x*fact(x-1);
	}
}
int main()
{
	int i;
	cin>>i;
	cout<<"factorial : "<<fact(i);
}
