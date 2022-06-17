#include<bits/stdc++.h>
using namespace std;
int find(char k,string str)
{
	int count=0;
	for(int i=0;i<str.length();i++)
	{
		if(str[i]==k)
		{
			count++;
		}
	}
	return count;
}
int main()
{
	string str;
	
	getline(cin,str);
	
	
	int n = str.length();
	int arr[n];
	
	for(int i=0;i<n;i++)
	{
		arr[i]=find(str[i],str);
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<"char = "<<str[i]<<" occ: "<<arr[i]<<endl;
	}
}

