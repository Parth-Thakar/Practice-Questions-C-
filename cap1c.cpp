#include<iostream>
using namespace std;
int main()
{
	int n = 5;
	int a[n]={85,25,65,21,84};
	int last_digit[n];
	int temp;
	for(int i =0;i<n;i++)
	{
		last_digit[i] = a[i]%10;
	}
	

	if(last_digit[n-1] == 0)
        cout<<"Yes\n";
        else 
        cout<<"No\n";
}
