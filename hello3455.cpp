#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	string str;
	
	cin>>n;
	cin>>str;
	
	for(int i=0;i<n-1;i++)
	{
		if(str[i]=='H' && str[i+1]=='H')
		{
			cout<<"NO";
			return 0;  
		}
		if(str[i]=='.')
		str[i]='B';
	}

		cout<<"YES"<<endl;
		if(str[n-1]=='.')
		{
			str[n-1]=='B';	
		}	
		cout<<str;

}
