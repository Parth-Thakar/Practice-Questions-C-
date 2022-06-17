#include<bits/stdc++.h>
using namespace std;
bool iseq(string str1,string str2)
{
	for(int i=0;i<str1.length();i++)
	{
		if(str1[i]!=str2[i])
		{
			return false;
		}
	}
	return true;
}
int main()
{
	string str1,str2;
	cout<<"Enter the 1st String : "<<endl;
	cin>>str1;
	
	cout<<"Enter the another string : "<<endl;
	
	cin>>str2;
	
	if(iseq(str1,str2))
	{
		cout<<"is equal : "<<endl;
	}
	else
	{
		cout<<"is not equal  : "<<endl;
	}
	
	
	
}
