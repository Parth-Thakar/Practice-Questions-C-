#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	int k;
	cin>>str;
	cin>>k;
	int na=0,nb=0;
	
	for(int i=0;i<str.length();i++)
	{
		if(str[i]=='A')
		na++;
		if(str[i]=='B')
		nb++;
	}
	
	int t=1;
	if(na<nb)
	{
		for(int i=0;i<str.length();i++)
		{
			if(str[i]=='B')
			{
			str[i]='A';
			t++;
			}	
			if(t==k)
			break;
		}
	}
	else
	{
		for(int i=0;i<str.length();i++)
		{
			if(str[i]=='A')
			{
			str[i]='B';
			t++;
			}	
			if(t==k+1)
			break;
		}
	}
	cout<<str<<" ";
	
	int count=0;
	
	for(int i=0;i<str.length();i++)
	{
		if(str[i]==str[i+1])
		{
			count++;
		}
	}
	
	cout<<count+1<<endl;
	
}
