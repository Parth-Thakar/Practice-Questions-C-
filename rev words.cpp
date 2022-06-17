#include<bits/stdc++.h>
using namespace std;
void rev(string str,int s,int e)
{
	while(s<e)
	{
		swap(str[s++],str[e--]);
	}
}
int main()
{
	string str;
	int count;
	cout<<"enter string"<<endl;
	getline(cin,str);
	for(int i=0;i<str.length();i++)
	{
		if(str[i]==' ')
		{
			for(int j = i;i<str.length();j++)
			{
				if(str[j]==' ')
				{
					rev(str,i+1,j-1);
				}
			}
		}
	}
    
    for(int i=0;i<str.length();i++)
    {
    	cout<<str[i]<<endl;
	}


}
