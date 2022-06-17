#include<bits/stdc++.h>
using namespace std;
string rs(string str)
{
    str.erase(remove(str.begin(), str.end(), ' '), str.end());
    return str;
}
int main()
{
	string str;
	cin>>str;
	
	sort(str.begin(),str.end());
	

	
	for(int i=0;i<str.length();i++)
	{
		if(str[i]==str[i+1])
		{
			str[i]=' ';
		}
	}
	
	str = rs(str);
	
	cout<<str;
}
