#include<bits/stdc++.h> 
using namespace std; 
int main()
{
    int n,d=0;
    string str;
    
    cin>>n;
    cin>>str; 
    for(int i=0;i<n-1;i++)
    {
        if(str[i]=='H' && str[i+1]=='H')
        {
            cout<<"NO"<<endl;
            
            return
        } 
        if(str[i]=='.')
        str[i]='B';
    }
    if(d==0)
    {
        cout<<"YES"<<endl;
        if(str[n-1]=='.')
        {
        	str[n-1]='B';
    	}
        cout<<str<<endl;
    }
}
