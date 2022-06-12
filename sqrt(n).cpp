#include<iostream>
using namespace std;
int main()
{
	int n=625;
	
	for(int i=1;i<=n/2;i++)
	{
		if((i*i)==n)
		{
			cout<<"the root is ==> "<<i<<endl;
			break;
		}
	}
}
