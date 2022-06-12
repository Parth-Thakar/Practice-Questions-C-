

#include<bits/stdc++.h>
using namespace std;

bool check(int i,int *arr,int rem,int sum,int n)
{
 
    if(i==n)
    {
        return false;
    }

    if(sum==rem)
    {
        return true;
    }
    
    if(check(i+1,arr,rem+arr[i],sum-arr[i],n))
    {
        return true;
    }
    if(check(i+1,arr,rem,sum,n))
    {
        return true;
    }
    

}

int main()
{
    int n;
    cin>>n;
    
    int arr[n];

	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
    int sum=0;

    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }

	if(check(0,arr,0,sum,n))
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
    
    
}
