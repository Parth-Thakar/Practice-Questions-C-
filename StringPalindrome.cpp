#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	
	string str1;
	
	getline(cin,str);
	
	str1 = str;
//	str.begin()    str.end() 
	reverse(str.begin(),str.end());
	
	if(str==str1)
	{
		cout<<"palindrome:"<<endl;
	}
	else
	cout<<"not a palindrome :"<<endl;
}
