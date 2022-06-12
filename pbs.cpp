#include<iostream>
using namespace std;
int main()
{
	string str;
	cin>>str;
	string vowels;
	for(int i =0;i<str.length();i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
		{
			vowels = vowels+str[i];
		}
	}
	
	cout<<str<<endl;
	cout<<vowels<<endl;
}
