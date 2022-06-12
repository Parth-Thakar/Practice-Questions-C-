#include<iostream>
using namespace std;
int fact(int x)
{
	int temp = 1;
	for(int i = x;i>0;i--)
	{
		temp = temp*i;
	}
	return temp;
}
int main()
{
	cout<<fact(3);
}
