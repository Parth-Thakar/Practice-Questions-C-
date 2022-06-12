#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	
	cin>>n;
	string str;
	cin>>str;
	
	
	for(int i =0;i<n;i++)
	{
		if(str[i]=='.')
		{
			str[i]='B';
		}
	}
	int check =0;
	for(int i =0;i<n;i++)
	{
		if(i==0)
		{
		if(str[i]=='H' && str[n-1]=='H')
		{
			check = 1;
		}	
		}
		if(str[i]=='H' && str[i+1]=='H' && str[i-1]=='H')
		{
			check = 1;
		}
		
		
	}
	
	if(check>0)
	{
		cout<<"YES"<<endl;
		cout<<str;
		return 0;
	}
	
	cout<<"NO"<<endl;
}
