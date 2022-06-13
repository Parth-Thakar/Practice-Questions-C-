#include<iostream>
using namespace std;
int main()
{   int count=0,k=4;
	int looper=0;
	for(int i=1;i<=4;i++)
	{
		looper=k-i;
		for(int j=1;j<=looper;j++)
		{
			cout<<" ";
		}
		for(int j=5;j<=i;i++)
		{
			cout<<count++<<endl;
		}
		cout<<endl;
	}
}
