#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	int count;
	
	getline(cin,str);
	
	int n  = str.length();
	
	for(int i =0;i<n;i++)
	{
		if(str[i] == ')' || str[i]=='(')
		{
			count++;
		}
	}
	
	cout<<count/2<<endl;
}

