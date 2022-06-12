#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str;
	string str1;
	
	cin>>str;
	str1=str;
	
	reverse(str.begin(),str.end());
	
	
	
	if(str==str1)
	{
		cout<<"yes :"<<endl;
	}
	else
	cout<<"no it is not a palindrome string"<<endl;
}
